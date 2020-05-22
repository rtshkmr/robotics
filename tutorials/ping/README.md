some pointers from the tutorials we're doing.
[developing codelets in C++](https://docs.nvidia.com/isaac/isaac/doc/tutorials/ping.html)

# Codelet

- must have 3 main files:  a BUILD file, a json file, and c++ files(a header (hpp) and a .cpp file)
- each isaac application has many nodes and edges
    * nodes run in parallel
    * edges represent communication b/w one node to anohthher, are directed

- An Isaac module defines a shared library that encapsulates a set of codelets and can be used by different applications.

- there's a components array and each node can consist of components. All components have to be added to the modules list (both in the json file as well as the BUILD file)

- component parameters e.g. tick_period have to be configured in the configuration section of the json file
    * Every configuration parameter is referenced by three elements: node name, component name and parameter name.
    * adding it to the json file will autocreate the parameter within the C++ source files (?)
    * we can add custom parameters to modify the codelet behaviour by adding them to the C++ header files
       e.g. `ISAAC_PARAM(std::string, message, "Hello World!");` this automatically becomes a macro, with it's own accessor `get_message()`

- each node communicates with other nodes by publishing a message, the message is serialised as a [capnproto message](https://capnproto.org/)  
 *  To enable message passing on a node we need to add a component called `MessageLedger`. This component handles incoming and outgoing messages and relays them to MessageLedger components in other nodes.

- **receiving messages**: (we create the pong codelet to receive), update the json and BUILD files (these are unique files ) accordingly. note that full name and not relative names are to be used.

   * connect the nodes using edges like so:
        ```json
            "edges": [
              {
                "source": "ping/ping/ping",
                "target": "pong/pong/trigger"
              }
            ]

        ```

   * Edges are connecting receiving RX channels to transmitting TX channels. A transmitting channel can transmit data to multiple receivers. A receiving channel can also receive data from multiple transmitters, however this comes with caveats and is discouraged. Similar to parameters, channels are referenced by three elements: node name, component name and channel name. An edge can be created by adding it to the “edges” section in the application


- use `tickOnMessage` so that the codelet only ticks when a new message is received (upon trigger)


- **Connecting over a network**
   * we include _nodes_ `TcpPublisher` and `TcpSubscriber` in the json file, and in the config section, we add in the relevant ports. for the listener, you have to specify the port and the ip addr  as well



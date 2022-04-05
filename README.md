# Comparative Mythology
 D3.js vizualizer

Dependencies:
Built with npm 8.3.0 (includes npx) and Node.js 16.13.1
Using either nvm (Node Version Manager) or Node.js Installer, install npm and Node.js. https://docs.npmjs.com/downloading-and-installing-node-js-and-npm#using-a-node-installer-to-install-node-js-and-npm

To run:
Once installed and the repo is local, open a console to the repo directory and enter the following command: _npx http-server_
![mintty_RrgaJwavvi](https://user-images.githubusercontent.com/35578683/156860497-d3330982-8279-4470-b524-1dce9782710f.png)

Open a web browser and navigate to either your local host/loopback address (127...) or your local network IP address(192...), both are provided in the console once the server has been setup.

If successful, you should see something like this:
![chrome_XkzAABkGOb](https://user-images.githubusercontent.com/35578683/156860992-bff95384-d2b1-4929-bd09-b5f520357dc0.png)

The simulation:
This project aims to vizualize comparative aspects of world mythologies (particularly of polytheistic religions) to glean intuitions about deities, their relationships to each other, and their relationships to the mythological portfolios of worship/symbolism they represent. Each node has a tooltip, indicating what it represents and there are two types of nodes: 
- Deity nodes, which connect to the Portfolio nodes they relate to or to other deity nodes who hold similar functions/identity in other religions e.g. Zeus and Jupiter being roughly equivalent deities in Greek and Roman myth, respectively. Tooltips are in the form "[Deity] ([Pantheon])"
- Portfolio nodes, which indicate aspects of worship e.g. Fertility or War. These nodes connect only to deities which represent them. Tooltips are of the form "[Aspect] ([Aspect])"
Physics-based modeling attenuates all nodes via links, pushing all nodes apart and pulling connected nodes together. Node size is based on the number of connections it has to other nodes, favoring portfolio nodes over individual deity nodes (In general only the most prolific deity nodes will rival the size of the most obscurely worshiped portfolios). Pantheons are color coded together.

Due to the physics of the simulation, relatedness should correlate to proximity (though not the converse due to the 2D limitations of the simulation). All Water deities are likely found near the Water Portfolio Node. The Sky Portfolio Node is near the Thunder, Weather, and Wind Nodes and far from the Earth Node. Nature, Fertility, and War Portfolio Nodes are both large and central due to being common aspects of worship, represented by many deities who cover a broad spectrum of worship cumulatively. The Luck Portfolio is isolated on the edge of the simulation due to its deities largely being representatives of only luck and few other portfolios. 

Controls: Nodes can be dragged and dropped to destabilize the simulation. To stabilize the simulation, simply click and hold a node (ideally a small outer node to minimize the effect of anchoring it to the mouse during simulation) to allow the simulation physics to run continuously. The number of nodes makes complete stabilization difficult, but much of the system should come to a rest after a few moments, regardless of destabilization.




Future developments:
- Ongoing passes of additional deities, details, verification of details, and pantheons to ensure the completion and veracity of the project.
- Moving the simulation into a 3D space to make the relations between nodes (particularly those in the center whose proximity is coincidental to their actual relatedness) more intuitive.
- Increasing legibility of nodes. Current tooltips are functional but are difficult to use holistically and the sheer number of nodes prevents a constant overlay of all information due to cluttering.

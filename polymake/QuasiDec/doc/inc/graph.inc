<div xmlns:html="http://www.w3.org/1999/xhtml" xmlns:pm="http://www.polymake.de/ns/docs#3" id="content">
  <h1>application: graph</h1>
  <div class="descr">
    <p> The application graph deals with directed and undirected graphs. They can be
 defined abstractly as a set of nodes and <a href="#i69" onclick="unfold('span:i69');">EDGES</a> or for instance as the <a href="#" onclick="unfold('span:');" class="ambiguous">vertex-edge
 graph</a> of a polytope.</p>
  </div>
  <br/>
  <b>imports from: </b>
  <a href="common.html">common</a>
  <br/>
  <div class="level2">
    <h2>
      <b>Objects</b>
    </h2>
    <ul class="unfoldable">
      <li>
        <div class="li">
          <div class="icon" id="icon:i12" onclick="swap_content('span:i12'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="object">
              <h3>
                <a href="#" class="javalink" id="i12" onclick="swap_content('span:i12'); return false;">
                  <span class="object">FaceLattice</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i12" class="foldit">
              <div class="descr">
                <p> Lattice represented as a directed acyclic graph.</p>
              </div>
              <b>derived from: </b>
              <a href="#i13" onclick="unfold('span:i13');">Graph&lt;Directed&gt;</a>
              <br/>
              <div class="level3"/>
              <h4>Properties of FaceLattice</h4>
              <ul class="unfoldable">
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i64" onclick="swap_content('span:i64'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i64" onclick="swap_content('span:i64'); return false;"><b>DIMS</b>:
		</a>
                      <a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a>
                      <br/>
                      <div style="display: inline" id="span:i64" class="foldit">
                        <div class="descr">
                          <p> Indices of the first nodes in each level.
 Intended for internal use only; please use <a href="#i60" onclick="unfold('span:i60');">nodes_of_dim</a> instead</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i65" onclick="swap_content('span:i65'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i65" onclick="swap_content('span:i65'); return false;"><b>FACES</b>:
		</a>
                      <a href="common.html#i46" onclick="unfold('span:i46');">common::NodeMap&lt;Directed, Set&lt;Int&gt;&gt;</a>
                      <br/>
                      <div style="display: inline" id="span:i65" class="foldit">
                        <div class="descr">
                          <p> Each node of the FaceLattice corresponds to a face. The node attribute is a set of vertices comprising the face.
 Incident edges lead to the containing faces of the next (higher) dimension.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
              </ul>
              <h4>User Methods of FaceLattice</h4>
              <ul class="unfoldable">
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i61" onclick="swap_content('span:i61'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i61" onclick="swap_content('span:i61'); return false;"><b>bottom_node</b></a>
			()  

			<div style="display: inline" id="span:i61" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Index of the node representing the empty face</p></div></div><div class="level3"/></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i62" onclick="swap_content('span:i62'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i62" onclick="swap_content('span:i62'); return false;"><b>dim</b></a>
			()  

			<div style="display: inline" id="span:i62" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Dimension of the lattice = number of levels - 1</p></div></div><div class="level3"/></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i60" onclick="swap_content('span:i60'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i60" onclick="swap_content('span:i60'); return false;"><b>nodes_of_dim</b></a>
			()  

			
				→ Set&lt;Int&gt;<div style="display: inline" id="span:i60" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Indices of nodes representing faces of the given dimension</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i63" onclick="swap_content('span:i63'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i63" onclick="swap_content('span:i63'); return false;"><b>top_node</b></a>
			()  

			<div style="display: inline" id="span:i63" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Index of the node representing <em class="u">the whole thing</em></p></div></div><div class="level3"/></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i59" onclick="swap_content('span:i59'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <div class="category">
                        <h3>
                          <a href="#" class="javalink" id="i59" onclick="swap_content('span:i59'); return false;">
                            <span class="category">Visualization</span>
                          </a>
                        </h3>
                      </div>
                      <div style="display: inline" id="span:i59" class="foldit">
                        <ul>
                          <li>
                            <div class="li">
                              <div class="icon" id="icon:i86" onclick="swap_content('span:i86'); return false;">
		 	
	</div>
                              <div class="unfoldable"><a href="#" class="javalink" id="i86" onclick="swap_content('span:i86'); return false;"><b>VISUAL</b></a>
			()  

			
				→ Visual::Lattice<div style="display: inline" id="span:i86" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the FaceLattice.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the node placement</div></div></td></tr><tr><td>option list:</td><td>Visual::Lattice::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Lattice</td><td/></tr></table></div></div></div>
                            </div>
                          </li>
                          <li>
                            <div class="li">
                              <div class="icon" id="icon:i85" onclick="swap_content('span:i85'); return false;">
		 	
	</div>
                              <div class="unfoldable"><a href="#" class="javalink" id="i85" onclick="swap_content('span:i85'); return false;"><b>VISUAL_DUAL</b></a>
			()  

			
				→ Visual::Lattice<div style="display: inline" id="span:i85" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the dual FaceLattice.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the node placement</div></div></td></tr><tr><td>option list:</td><td>Visual::Lattice::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Lattice</td><td/></tr></table></div></div></div>
                            </div>
                          </li>
                        </ul>
                      </div>
                    </div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
      <li>
        <div class="li">
          <div class="icon" id="icon:i14" onclick="swap_content('span:i14'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="object">
              <h3>
                <a href="#" class="javalink" id="i14" onclick="swap_content('span:i14'); return false;">
                  <span class="object">Graph</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i14" class="foldit">
              <div class="descr">
                <p> A graph with optional node and edge attributes.</p>
              </div>
              <div class="level3"/>
              <h4>Properties of Graph</h4>
              <ul class="unfoldable">
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i73" onclick="swap_content('span:i73'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i73" onclick="swap_content('span:i73'); return false;"><b>ADJACENCY</b>:
		</a>
                      <a href="common.html#i44" onclick="unfold('span:i44');">common::Graph&lt;Dir&gt;</a>
                      <br/>
                      <div style="display: inline" id="span:i73" class="foldit">
                        <div class="descr">
                          <p> combinatorial description of the Graph in the form of adjacency matrix</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i72" onclick="swap_content('span:i72'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i72" onclick="swap_content('span:i72'); return false;"><b>CONNECTED</b>:
		</a>
                      <a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a>
                      <br/>
                      <div style="display: inline" id="span:i72" class="foldit">
                        <div class="descr">
                          <p> True if the graph is a connected graph.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i76" onclick="swap_content('span:i76'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i76" onclick="swap_content('span:i76'); return false;"><b>CONNECTED_COMPONENTS</b>:
		</a>
                      <a href="common.html#i42" onclick="unfold('span:i42');">common::PowerSet&lt;Int&gt;</a>
                      <br/>
                      <div style="display: inline" id="span:i76" class="foldit">
                        <div class="descr">
                          <p> The connected components, encoded as node sets.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i74" onclick="swap_content('span:i74'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i74" onclick="swap_content('span:i74'); return false;"><b>DIAMETER</b>:
		</a>
                      <a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a>
                      <br/>
                      <div style="display: inline" id="span:i74" class="foldit">
                        <div class="descr">
                          <p> The diameter of the graph.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i71" onclick="swap_content('span:i71'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i71" onclick="swap_content('span:i71'); return false;"><b>NODE_DEGREES</b>:
		</a>
                      <a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a>
                      <br/>
                      <div style="display: inline" id="span:i71" class="foldit">
                        <div class="descr">
                          <p> Degrees of nodes in the graph.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i75" onclick="swap_content('span:i75'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i75" onclick="swap_content('span:i75'); return false;"><b>NODE_LABELS</b>:
		</a>
                      <a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a>
                      <br/>
                      <div style="display: inline" id="span:i75" class="foldit">
                        <div class="descr">
                          <p> Labels of the nodes of the graph.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i77" onclick="swap_content('span:i77'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i77" onclick="swap_content('span:i77'); return false;"><b>N_CONNECTED_COMPONENTS</b>:
		</a>
                      <a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a>
                      <br/>
                      <div style="display: inline" id="span:i77" class="foldit">
                        <div class="descr">
                          <p> Number of <a href="#i76" onclick="unfold('span:i76');">CONNECTED_COMPONENTS</a> of the graph.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i70" onclick="swap_content('span:i70'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i70" onclick="swap_content('span:i70'); return false;"><b>N_EDGES</b>:
		</a>
                      <a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a>
                      <br/>
                      <div style="display: inline" id="span:i70" class="foldit">
                        <div class="descr">
                          <p> Number of <a href="#i69" onclick="unfold('span:i69');">EDGES</a> of the graph.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i79" onclick="swap_content('span:i79'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i79" onclick="swap_content('span:i79'); return false;"><b>N_NODES</b>:
		</a>
                      <a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a>
                      <br/>
                      <div style="display: inline" id="span:i79" class="foldit">
                        <div class="descr">
                          <p> Number of nodes of the graph.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
              </ul>
              <h4>User Methods of Graph</h4>
              <ul class="unfoldable">
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i69" onclick="swap_content('span:i69'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i69" onclick="swap_content('span:i69'); return false;"><b>EDGES</b></a>
			(G)  

			
				→ Array&lt;Set&lt;Int&gt;&gt;<div style="display: inline" id="span:i69" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Explore the graph as a sequence of its edges.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i14" onclick="unfold('span:i14');">Graph</a></td><td class="param">G</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i68" onclick="swap_content('span:i68'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <div class="category">
                        <h3>
                          <a href="#" class="javalink" id="i68" onclick="swap_content('span:i68'); return false;">
                            <span class="category">Visualization</span>
                          </a>
                        </h3>
                      </div>
                      <div style="display: inline" id="span:i68" class="foldit">
                        <ul>
                          <li>
                            <div class="li">
                              <div class="icon" id="icon:i87" onclick="swap_content('span:i87'); return false;">
		 	
	</div>
                              <div class="unfoldable"><a href="#" class="javalink" id="i87" onclick="swap_content('span:i87'); return false;"><b>VISUAL</b></a>
			()  

			
				→ Visual::Graph<div style="display: inline" id="span:i87" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualizes the graph.
 Decorations may include <code>Coord</code>, disabling the default spring embedder.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the spring embedder</div></div></td></tr><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Graph</td><td/></tr></table></div></div></div>
                            </div>
                          </li>
                        </ul>
                      </div>
                    </div>
                  </div>
                </li>
              </ul>
              <h4>Permutations of Graph</h4>
              <ul class="unfoldable">
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i78" onclick="swap_content('span:i78'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i78" onclick="swap_content('span:i78'); return false;">
                        <b>NodePerm</b>
                      </a>
                      <div style="display: inline" id="span:i78" class="foldit">
                        <div class="undoc">
                          <p>UNDOCUMENTED</p>
                        </div>
                        <h4>Properties of NodePerm</h4>
                        <ul class="unfoldable">
                          <li>
                            <div class="li">
                              <div class="icon" id="icon:i89" onclick="swap_content('span:i89'); return false;">
		 	
	</div>
                              <div class="unfoldable">
                                <a href="#" class="javalink" id="i89" onclick="swap_content('span:i89'); return false;"><b>PERMUTATION</b>:
		</a>
                                <a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a>
                                <br/>
                                <div style="display: inline" id="span:i89" class="foldit">
                                  <div class="descr">
                                    <p> Transforming this <a href="#i73" onclick="unfold('span:i73');">ADJACENCY</a> into the basic object</p>
                                  </div>
                                </div>
                              </div>
                            </div>
                          </li>
                        </ul>
                      </div>
                    </div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
      <li>
        <div class="li">
          <div class="icon" id="icon:i13" onclick="swap_content('span:i13'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="object">
              <h3>
                <a href="#" class="javalink" id="i13" onclick="swap_content('span:i13'); return false;">
                  <span class="object">Graph&lt;Directed&gt;</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i13" class="foldit">
              <b>derived from: </b>
              <a href="#i14" onclick="unfold('span:i14');">Graph</a>
              <br/>
              <div class="level3"/>
              <h4>Properties of Graph&lt;Directed&gt;</h4>
              <ul class="unfoldable">
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i66" onclick="swap_content('span:i66'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i66" onclick="swap_content('span:i66'); return false;"><b>NODE_IN_DEGREES</b>:
		</a>
                      <a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a>
                      <br/>
                      <div style="display: inline" id="span:i66" class="foldit">
                        <div class="descr">
                          <p> The number of incoming edges of the graph nodes.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i67" onclick="swap_content('span:i67'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i67" onclick="swap_content('span:i67'); return false;"><b>NODE_OUT_DEGREES</b>:
		</a>
                      <a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a>
                      <br/>
                      <div style="display: inline" id="span:i67" class="foldit">
                        <div class="descr">
                          <p> The number of outgoing edges of the graph nodes.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
      <li>
        <div class="li">
          <div class="icon" id="icon:i15" onclick="swap_content('span:i15'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="object">
              <h3>
                <a href="#" class="javalink" id="i15" onclick="swap_content('span:i15'); return false;">
                  <span class="object">Graph&lt;Undirected&gt;</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i15" class="foldit">
              <b>derived from: </b>
              <a href="#i14" onclick="unfold('span:i14');">Graph</a>
              <br/>
              <div class="level3"/>
              <h4>Properties of Graph&lt;Undirected&gt;</h4>
              <ul class="unfoldable">
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i80" onclick="swap_content('span:i80'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i80" onclick="swap_content('span:i80'); return false;"><b>BIPARTITE</b>:
		</a>
                      <a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a>
                      <br/>
                      <div style="display: inline" id="span:i80" class="foldit">
                        <div class="descr">
                          <p> True if the graph is a bipartite.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i83" onclick="swap_content('span:i83'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i83" onclick="swap_content('span:i83'); return false;"><b>CONNECTIVITY</b>:
		</a>
                      <a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a>
                      <br/>
                      <div style="display: inline" id="span:i83" class="foldit">
                        <div class="descr">
                          <p> Node connectivity of the graph, that is, the minimal number of nodes to be removed
 from the graph such that the result is disconnected.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i82" onclick="swap_content('span:i82'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i82" onclick="swap_content('span:i82'); return false;"><b>MAX_CLIQUES</b>:
		</a>
                      <a href="common.html#i42" onclick="unfold('span:i42');">common::PowerSet&lt;Int&gt;</a>
                      <br/>
                      <div style="display: inline" id="span:i82" class="foldit">
                        <div class="descr">
                          <p> The maximal cliques of the graph, encoded as node sets.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i84" onclick="swap_content('span:i84'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i84" onclick="swap_content('span:i84'); return false;"><b>SIGNATURE</b>:
		</a>
                      <a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a>
                      <br/>
                      <div style="display: inline" id="span:i84" class="foldit">
                        <div class="descr">
                          <p> Difference of the black and white nodes if the graph is <a href="#i80" onclick="unfold('span:i80');">BIPARTITE</a>.
 Otherwise -1.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i81" onclick="swap_content('span:i81'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i81" onclick="swap_content('span:i81'); return false;"><b>TRIANGLE_FREE</b>:
		</a>
                      <a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a>
                      <br/>
                      <div style="display: inline" id="span:i81" class="foldit">
                        <div class="descr">
                          <p> Determine whether the graph has triangles or not.</p>
                        </div>
                      </div>
                    </div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
    </ul>
  </div>
  <div class="level2">
    <h2>User Functions</h2>
    <ul class="unfoldable">
      <li>
        <div class="li">
          <div class="icon" id="icon:i9" onclick="swap_content('span:i9'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="category">
              <h3>
                <a href="#" class="javalink" id="i9" onclick="swap_content('span:i9'); return false;">
                  <span class="category">Comparing</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i9" class="foldit">
              <ul>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i40" onclick="swap_content('span:i40'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i40" onclick="swap_content('span:i40'); return false;"><b>automorphisms</b></a>
			(graph)  

			
				→ Array&lt;Array&lt;Int&gt;&gt;<div style="display: inline" id="span:i40" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Find the automorphism group of the graph.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>props::Graph</td><td class="param">graph</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Array&lt;Int&gt;&gt;</a></td><td><div class="descr"><div>each element encodes a node permutation.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i57" onclick="swap_content('span:i57'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i57" onclick="swap_content('span:i57'); return false;"><b>automorphisms</b></a>
			(m)  

			
				→ Array&lt;Array&lt;Int&gt;&gt;<div style="display: inline" id="span:i57" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Find the automorphism group of the symmetric incidence matrix.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i27" onclick="unfold('span:i27');">IncidenceMatrix&lt;Symmetric&gt;</a></td><td class="param">m</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Array&lt;Int&gt;&gt;</a></td><td><div class="descr"><div>each element encodes a permutation of its rows (=columns).</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i58" onclick="swap_content('span:i58'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i58" onclick="swap_content('span:i58'); return false;"><b>automorphisms</b></a>
			(m)  

			
				→ Array&lt;Pair&lt;Array&lt;Int&gt;,Array&lt;Int&gt;&gt;&gt;<div style="display: inline" id="span:i58" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Find the automorphism group of the non-symmetric incidence matrix.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i27" onclick="unfold('span:i27');">IncidenceMatrix&lt;NonSymmetric&gt;</a></td><td class="param">m</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Pair&lt;Array&lt;Int&gt;,Array&lt;Int&gt;&gt;&gt;</a></td><td><div class="descr"><div>each element encodes a permutation of its rows (<code>first</code>) and columns (<code>second</code>).</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i37" onclick="swap_content('span:i37'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i37" onclick="swap_content('span:i37'); return false;"><b>find_node_permutation</b></a>
			(graph1, graph2)  

			
				→ Array&lt;Int&gt;<div style="display: inline" id="span:i37" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Find the node permutation mapping <em class="param">graph1</em> to <em class="param">graph2</em>.
 If the given graphs are not isomorphic, throw an expection.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>props::Graph</td><td class="param">graph1</td><td/></tr><tr><td>props::Graph</td><td class="param">graph2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Int&gt;</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i38" onclick="swap_content('span:i38'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i38" onclick="swap_content('span:i38'); return false;"><b>find_row_col_permutation</b></a>
			(m1, m2)  

			
				→ Pair&lt;Array&lt;Int&gt;,Array&lt;Int&gt;&gt;<div style="display: inline" id="span:i38" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Find the permutations mapping the non-symmetric incidence matrix <em class="param">m1</em> to <em class="param">m2</em>.
 If the given matrices are not isomorphic, throw an expection.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i27" onclick="unfold('span:i27');">IncidenceMatrix&lt;NonSymmetric&gt;</a></td><td class="param">m1</td><td/></tr><tr><td><a href="common.html#i27" onclick="unfold('span:i27');">IncidenceMatrix&lt;NonSymmetric&gt;</a></td><td class="param">m2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i29" onclick="unfold('span:i29');">Pair&lt;Array&lt;Int&gt;,Array&lt;Int&gt;&gt;</a></td><td><div class="descr"><div><code>first</code> permutation applies to the rows, <code>second</code> applies to the columns.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i39" onclick="swap_content('span:i39'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i39" onclick="swap_content('span:i39'); return false;"><b>isomorphic</b></a>
			(graph1, graph2)  

			
				→ Bool<div style="display: inline" id="span:i39" class="foldit"><br/><div class="descr_func"><div class="descr"><p> true if <em class="param">graph1</em> and <em class="param">graph2</em> are isomorphic.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>props::Graph</td><td class="param">graph1</td><td/></tr><tr><td>props::Graph</td><td class="param">graph2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
      <li>
        <div class="li">
          <div class="icon" id="icon:i10" onclick="swap_content('span:i10'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="category">
              <h3>
                <a href="#" class="javalink" id="i10" onclick="swap_content('span:i10'); return false;">
                  <span class="category">Other</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i10" class="foldit">
              <ul>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i41" onclick="swap_content('span:i41'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i41" onclick="swap_content('span:i41'); return false;"><b>connectivity</b></a>
			(graph)  

			
				→ Int<div style="display: inline" id="span:i41" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the connectivity of a given <em class="param">graph</em> using the Ford-Fulkerson flow algorithm.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>props::Graph&lt;Undirected&gt;</td><td class="param">graph</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i42" onclick="swap_content('span:i42'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i42" onclick="swap_content('span:i42'); return false;"><b>edge_lengths</b></a>
			(G, coords)  

			
				→ EdgeMap<div style="display: inline" id="span:i42" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the lengths of all edges of a given graph <em class="param">G</em> from
 the coordinates <em class="param">coords</em> of its nodes.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i13" onclick="unfold('span:i13');">Graph&lt;Directed&gt;</a></td><td class="param">G</td><td><div class="descr"><div>the input graph</div></div></td></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">coords</td><td><div class="descr"><div>the coordinates of the nodes</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i25" onclick="unfold('span:i25');">EdgeMap</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i43" onclick="swap_content('span:i43'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i43" onclick="swap_content('span:i43'); return false;"><b>graph_from_edges</b></a>
			(edges)  

			
				→ Graph<div style="display: inline" id="span:i43" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Creates a graph from a given list of <em class="param">edges</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td class="param">edges</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i14" onclick="unfold('span:i14');">Graph</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
      <li>
        <div class="li">
          <div class="icon" id="icon:i7" onclick="swap_content('span:i7'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="category">
              <h3>
                <a href="#" class="javalink" id="i7" onclick="swap_content('span:i7'); return false;">
                  <span class="category">Producing from scratch</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i7" class="foldit">
              <ul>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i31" onclick="swap_content('span:i31'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i31" onclick="swap_content('span:i31'); return false;"><b>complete</b></a>
			(n)  

			
				→ Graph<div style="display: inline" id="span:i31" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Constructs a complete graph with <em class="param">n</em> nodes.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i14" onclick="unfold('span:i14');">Graph</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i29" onclick="swap_content('span:i29'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i29" onclick="swap_content('span:i29'); return false;"><b>complete_bipartite</b></a>
			(k, l)  

			
				→ Graph<div style="display: inline" id="span:i29" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Constructs a complete bipartite graph with <em class="param">k</em> + <em class="param">l</em> nodes.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">k</td><td/></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">l</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i14" onclick="unfold('span:i14');">Graph</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i30" onclick="swap_content('span:i30'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i30" onclick="swap_content('span:i30'); return false;"><b>petersen</b></a>
			()  

			
				→ Graph<div style="display: inline" id="span:i30" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Constructs the Petersen graph.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="#i14" onclick="unfold('span:i14');">Graph</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
      <li>
        <div class="li">
          <div class="icon" id="icon:i6" onclick="swap_content('span:i6'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="category">
              <h3>
                <a href="#" class="javalink" id="i6" onclick="swap_content('span:i6'); return false;">
                  <span class="category">Quasi-Median</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i6" class="foldit">
              <ul>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i28" onclick="swap_content('span:i28'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i28" onclick="swap_content('span:i28'); return false;"><b>block_decomposition</b></a>
			(S)  

			
				→ Array&lt;Block&gt;<div style="display: inline" id="span:i28" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes a block decomposition of a list of sequences.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;String&gt;</a></td><td class="param">S</td><td><div class="descr"><div>array of sequences</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Block&gt;</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i55" onclick="swap_content('span:i55'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i55" onclick="swap_content('span:i55'); return false;"><b>block_decomposition</b></a>
			(S, n)  

			
				→ Array&lt;Block&gt;<div style="display: inline" id="span:i55" class="foldit"><br/><div class="descr_func"><div class="descr"><p> computes a block decomposition of a list of non-trivial partitions</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Partition&gt;</a></td><td class="param">S</td><td><div class="descr"><div>array of partitions</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>number of taxa</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Block&gt;</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i27" onclick="swap_content('span:i27'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i27" onclick="swap_content('span:i27'); return false;"><b>sequences_to_partitions</b></a>
			(S)  

			
				→ Array&lt;Partition&gt;<div style="display: inline" id="span:i27" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Transforms a list <em class="param">S</em> of sequences into a list of partitions.
 non-trivial and multiple partitions will be ignored.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;String&gt;</a></td><td class="param">S</td><td><div class="descr"><div>array of sequences</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Partition&gt;</a></td><td/></tr></table></div></div></div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
      <li>
        <div class="li">
          <div class="icon" id="icon:i8" onclick="swap_content('span:i8'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="category">
              <h3>
                <a href="#" class="javalink" id="i8" onclick="swap_content('span:i8'); return false;">
                  <span class="category">Visualization</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i8" class="foldit">
              <ul>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i35" onclick="swap_content('span:i35'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i35" onclick="swap_content('span:i35'); return false;"><b>graphviz</b></a>
			(vis_obj ...)  

			<div style="display: inline" id="span:i35" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw the given graph or face lattice object using <a href="http://polymake.org//external_software#graphviz" onclick="unfold('span:graphviz');">graphviz</a> program
 <code>neato</code> or <code>dot</code> respectively.
 The output is rendered in PostScript format and fed into a viewer program, if one is configured.
 If you prefer to produce another output format, please use the <em class="param">File</em> option and call the <code>neato</code>
 or <code>dot</code> program manually.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>Visual::Object</td><td class="param">vis_obj ...</td><td><div class="descr"><div>objects to display</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">File</td><td><div class="descr"><div>"filename" or "AUTO"
  Store the graph description in a DOT source file without starting the interactive GUI.
  The <code>.dot</code> suffix is automatically added to the file name.</div><div>  Specify <em class="param">AUTO</em> if you want the filename be automatically derived
  from the drawing title.</div><div>  You can also use any expression allowed for the <code>open</code> function,
  including "-" for terminal output, "&amp;HANDLE" for an already opened file handle,
  or "| program" for a pipe.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i36" onclick="swap_content('span:i36'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i36" onclick="swap_content('span:i36'); return false;"><b>hd_embedder</b></a>
			(label_width)  

			<div style="display: inline" id="span:i36" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Create an embedding of the Hasse diagram as a layered graph.
 The embedding algorithm tries to minimize the weighted sum of squares of edge lengths,
 starting from a random distribution. The weights are relative to the fatness of the layers.
 The y-space between the layers is constant.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array</a></td><td class="param">label_width</td><td><div class="descr"><div>estimates (better upper bounds) of the label width of each node.
 The computed layout guarantees that the distances between the nodes in a layer are at least equal to
 the widest label in this layer.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">dual</td><td><div class="descr"><div>the node representing the empty face is put on the topmost level</div></div></td></tr><tr><td><a href="common.html#i53" onclick="unfold('span:i53');">Float</a></td><td class="param">eps</td><td><div class="descr"><div>calculation accuracy.</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>effects the initial placement of the nodes.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i34" onclick="swap_content('span:i34'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i34" onclick="swap_content('span:i34'); return false;"><b>LEDA_graph</b></a>
			()  

			<div style="display: inline" id="span:i34" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Write a graph in LEDA input format.</p></div></div><div class="level3"/></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i32" onclick="swap_content('span:i32'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i32" onclick="swap_content('span:i32'); return false;"><b>metapost</b></a>
			(vis_obj ...)  

			<div style="display: inline" id="span:i32" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a MetaPost input file with given visual objects.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>Visual::Object</td><td class="param">vis_obj ...</td><td><div class="descr"><div>objects to display</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">File</td><td><div class="descr"><div>"filename" or "AUTO"
  The MetaPost description always has to be stored in a file, there is no interactive viewer for this
  kind of visualization.</div><div>  For the file name you can use any expression allowed for the <code>open</code> function,
  including "-" for terminal output, "&amp;HANDLE" for an already opened file handle,
  or "| program" for a pipe.  Real file names are automatically completed with the <code>.mp</code> suffix if needed.</div><div>  The default setting "AUTO" lets the file name be derived from the drawing title.
  The automatically generated file name is displayed in the verbose mode.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i33" onclick="swap_content('span:i33'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i33" onclick="swap_content('span:i33'); return false;"><b>spring_embedder</b></a>
			(graph)  

			<div style="display: inline" id="span:i33" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a 3-d embedding for the graph using the spring embedding algorithm
 along the lines of
</p><blockquote><div> Thomas Fruchtermann and Edward Reingold:</div><div> Graph Drawing by Force-directed Placement.</div><div> Software Practice and Experience Vol. 21, 1129-1164 (1992), no. 11.</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>props::Graph&lt;Undirected&gt;</td><td class="param">graph</td><td><div class="descr"><div>to be embedded.</div></div></td></tr></table><h5>Options</h5><div class="descr"><div>affecting the desired picture</div></div><table class="args"><tr><td><a href="common.html#i25" onclick="unfold('span:i25');">EdgeMap</a></td><td class="param">edge_weights</td><td><div class="descr"><div>relative edge lengths.
  By default the embedding algorithm tries to stretch all edges to the same length.</div></div></td></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">z-ordering</td><td><div class="descr"><div>an objective function provides an additional force along the z-axis,
  trying to rearrange nodes in the order of the function growth.</div></div></td></tr><tr><td><a href="common.html#i53" onclick="unfold('span:i53');">Float</a></td><td class="param">z-factor</td><td><div class="descr"><div>gain coefficient applied to the <em class="param">z-ordering</em> force.</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed for initial node placement on a unit sphere.</div></div></td></tr></table><div class="descr"><div>calculation fine-tuning</div></div><table class="args"><tr><td><a href="common.html#i53" onclick="unfold('span:i53');">Float</a></td><td class="param">scale</td><td><div class="descr"><div>enlarges the ideal edge length</div></div></td></tr><tr><td><a href="common.html#i53" onclick="unfold('span:i53');">Float</a></td><td class="param">balance</td><td><div class="descr"><div>changes the balance between the edge contraction and node repulsion forces</div></div></td></tr><tr><td><a href="common.html#i53" onclick="unfold('span:i53');">Float</a></td><td class="param">inertion</td><td><div class="descr"><div>affects how the nodes are moved, can be used to restrain oscillations</div></div></td></tr><tr><td><a href="common.html#i53" onclick="unfold('span:i53');">Float</a></td><td class="param">viscosity</td><td><div class="descr"><div>idem</div></div></td></tr><tr><td><a href="common.html#i53" onclick="unfold('span:i53');">Float</a></td><td class="param">eps</td><td><div class="descr"><div>a threshold for point movement between iterations, below that it is considered to stand still</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">max-iterations</td><td><div class="descr"><div>hard limit for computational efforts.
  The algorithm terminates at latest after that many iterations regardless of the convergence achieved so far.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
    </ul>
  </div>
  <div class="level3">
    <h2>Common Option Lists</h2>
    <ul class="unfoldable">
      <li>
        <div class="li">
          <div class="icon" id="icon:i11" onclick="swap_content('span:i11'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="category">
              <h3>
                <a href="#" class="javalink" id="i11" onclick="swap_content('span:i11'); return false;">
                  <span class="category">Visualization</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i11" class="foldit">
              <ul>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i45" onclick="swap_content('span:i45'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i45" onclick="swap_content('span:i45'); return false;">
                        <b>Visual::Graph::decorations</b>
                      </a>
                      <div style="display: inline" id="span:i45" class="foldit"><div class="descr"><p> Attributes modifying the appearance of graphs</p></div><b>imports from: </b>Visual::Wire::decorations, Visual::PointSet::decorations<br/><br/><h5>Options</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix&lt;Float&gt;</a></td><td class="param">Coord</td><td><div class="descr"><div>2-d or 3-d coordinates of the nodes.
                If not specified, a random embedding is generated using a pseudo-physical spring model</div></div></td></tr><tr><td><a href="common.html#i134" onclick="unfold('span:i134');">Flexible&lt;RGB&gt;</a></td><td class="param">NodeColor</td><td><div class="descr"><div>alias for PointColor</div></div></td></tr><tr><td><a href="common.html#i134" onclick="unfold('span:i134');">Flexible&lt;Float&gt;</a></td><td class="param">NodeThickness</td><td><div class="descr"><div>alias for PointThickness</div></div></td></tr><tr><td><a href="common.html#i134" onclick="unfold('span:i134');">Flexible&lt;RGB&gt;</a></td><td class="param">NodeBorderColor</td><td><div class="descr"><div>alias for PointBorderColor</div></div></td></tr><tr><td><a href="common.html#i134" onclick="unfold('span:i134');">Flexible&lt;Float&gt;</a></td><td class="param">NodeBorderThickness</td><td><div class="descr"><div>alias for PointBorderThickness</div></div></td></tr><tr><td><a href="common.html#i134" onclick="unfold('span:i134');">Flexible&lt;String&gt;</a></td><td class="param">NodeStyle</td><td><div class="descr"><div>alias for PointStyle</div></div></td></tr><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">NodeLabels</td><td><div class="descr"><div>alias for PointLabels</div></div></td></tr></table></div>
                    </div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i44" onclick="swap_content('span:i44'); return false;">
		 	
	</div>
                    <div class="unfoldable">
                      <a href="#" class="javalink" id="i44" onclick="swap_content('span:i44'); return false;">
                        <b>Visual::Lattice::decorations</b>
                      </a>
                      <div style="display: inline" id="span:i44" class="foldit"><div class="descr"><p> Attributes modifying the appearance of face lattices</p></div><b>imports from: </b>Visual::Graph::decorations, Visual::Wire::decorations, Visual::PointSet::decorations<br/><br/><h5>Options</h5><table class="args"><tr><td><a href="common.html#i134" onclick="unfold('span:i134');">Flexible&lt;Int&gt;</a></td><td class="param">ArrowStyle</td><td><div class="descr"><div>How to draw directed edges: 0 (like undirected), 1 (with an arrow pointing towards the edge),
                or -1 (with an arrow pointing against the edge).  Default is 1.</div></div></td></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;String&gt;</a></td><td class="param">AtomLabels</td><td><div class="descr"><div>Labels of atoms, to use as building blocks for node labels.  By default the ordinal numbers are taken.</div></div></td></tr></table></div>
                    </div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
    </ul>
  </div>
</div>

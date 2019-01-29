<div xmlns:html="http://www.w3.org/1999/xhtml" xmlns:pm="http://www.polymake.de/ns/docs#3" id="content"><h1>application: polytope</h1><div class="descr"><p> This is the historically first application, and the largest one.</p><p> It deals with convex pointed polyhedra.  It allows to define a polyhedron either as a convex hull of a point set, an intersection of
 halfspaces, or as an incidence matrix without any embedding.  Then you can ask for a plenty of its (especially combinatorial)
 properties,  construct new polyhedra by modifying it,  or study the behavior of the objective functions.</p><p> There is a wide range of visualization methods for polyhedra, even for dimensions &gt; 4 and purely combinatorial descriptions,
 including interfaces to interactive geometry viewers (such as <a href="http://polymake.org//external_software#javaview" onclick="unfold('span:javaview');">JavaView</a> or <a href="http://polymake.org//external_software#geomview" onclick="unfold('span:geomview');">geomview</a>), generating
 PostScript drawings and povray scene files.</p></div><br/><b>imports from: </b><a href="common.html">common</a>, <a href="graph.html">graph</a><br/><b>uses: </b><a href="group.html">group</a>, <a href="topaz.html">topaz</a><br/><div class="level2"><h2><b>Objects</b></h2><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i34" onclick="swap_content('span:i34'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i34" onclick="swap_content('span:i34'); return false;"><span class="object">Cone</span></a></h3></div><div style="display: inline" id="span:i34" class="foldit"><div class="descr"><p> A polyhedral cone, not necessarily pointed.
 Note that in contrast to the vertices of a polytope, the <a href="#i501" onclick="unfold('span:i501');">RAYS</a> are given in affine coordinates.</p></div><div class="level3"/><h4>Properties of Cone</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i315" onclick="swap_content('span:i315'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i315" onclick="swap_content('span:i315'); return false;"><span class="category">Basic properties</span></a></h3></div><div style="display: inline" id="span:i315" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i459" onclick="swap_content('span:i459'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i459" onclick="swap_content('span:i459'); return false;"><b>CONE_DIM</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i459" class="foldit"><div class="descr"><p> Dimension of the linear span of the cone = dimension of the cone.
 If the cone is given purely combinatorially, this is the dimension of a minimal embedding space
 deduced from the combinatorial structure.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i472" onclick="swap_content('span:i472'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i472" onclick="swap_content('span:i472'); return false;"><b>COORDINATE_LABELS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a><br/><div style="display: inline" id="span:i472" class="foldit"><div class="descr"><p> Unique names assigned to the coordinate directions, analogous to <a href="#i470" onclick="unfold('span:i470');">RAY_LABELS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i461" onclick="swap_content('span:i461'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i461" onclick="swap_content('span:i461'); return false;"><b>EQUATIONS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i461" class="foldit"><div class="descr"><p> Equations that hold for all <a href="#i503" onclick="unfold('span:i503');">INPUT_RAYS</a> of the cone.</p><p> Input section only.  Ask for <a href="#i467" onclick="unfold('span:i467');">LINEAR_SPAN</a> if you want to see an irredundant description of the linear span.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i466" onclick="swap_content('span:i466'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i466" onclick="swap_content('span:i466'); return false;"><b>FACETS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i466" class="foldit"><div class="descr"><p> Facets of the cone, encoded as inequalities. Dual to <a href="#i501" onclick="unfold('span:i501');">RAYS</a>.
 This section is empty if and only if the cone is trivial (e.g. if it encodes an empty polytope).
 Notice that a polytope which is a single points defines a one-dimensional cone, the face a t infinity is a facet.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i464" onclick="swap_content('span:i464'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i464" onclick="swap_content('span:i464'); return false;"><b>FACET_LABELS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a><br/><div style="display: inline" id="span:i464" class="foldit"><div class="descr"><p> Unique names assigned to the <a href="#i466" onclick="unfold('span:i466');">FACETS</a>, analogous to <a href="#i470" onclick="unfold('span:i470');">RAY_LABELS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i473" onclick="swap_content('span:i473'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i473" onclick="swap_content('span:i473'); return false;"><b>FULL_DIM</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i473" class="foldit"><div class="descr"><p> <a href="#i500" onclick="unfold('span:i500');">CONE_AMBIENT_DIM</a> and <a href="#i459" onclick="unfold('span:i459');">CONE_DIM</a> coincide.  Notice that this makes sense also for the derived Polytope class.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i465" onclick="swap_content('span:i465'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i465" onclick="swap_content('span:i465'); return false;"><b>INEQUALITIES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i465" class="foldit"><div class="descr"><p> Inequalities giving rise to the cone; redundancies are allowed.
 Dual to <a href="#i503" onclick="unfold('span:i503');">INPUT_RAYS</a>.</p><p> Input section only.  Ask for <a href="#i466" onclick="unfold('span:i466');">FACETS</a> if you want to compute an H-representation from a V-representation.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i457" onclick="swap_content('span:i457'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i457" onclick="swap_content('span:i457'); return false;"><b>LINEALITY_DIM</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i457" class="foldit"><div class="descr"><p> Dimension of the <a href="#i469" onclick="unfold('span:i469');">LINEALITY_SPACE</a> (&gt;0 in the non-POINTED case)</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i469" onclick="swap_content('span:i469'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i469" onclick="swap_content('span:i469'); return false;"><b>LINEALITY_SPACE</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i469" class="foldit"><div class="descr"><p> Basis of the linear subspace orthogonal to all <a href="#i465" onclick="unfold('span:i465');">INEQUALITIES</a> and <a href="#i461" onclick="unfold('span:i461');">EQUATIONS</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i467" onclick="swap_content('span:i467'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i467" onclick="swap_content('span:i467'); return false;"><b>LINEAR_SPAN</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i467" class="foldit"><div class="descr"><p> Dual basis of the linear span of the cone.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i468" onclick="swap_content('span:i468'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i468" onclick="swap_content('span:i468'); return false;"><b>N_EQUATIONS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i468" class="foldit"><div class="descr"><p> The number of <a href="#i461" onclick="unfold('span:i461');">EQUATIONS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i471" onclick="swap_content('span:i471'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i471" onclick="swap_content('span:i471'); return false;"><b>N_FACETS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i471" class="foldit"><div class="descr"><p> The number of <a href="#i466" onclick="unfold('span:i466');">FACETS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i460" onclick="swap_content('span:i460'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i460" onclick="swap_content('span:i460'); return false;"><b>N_INEQUALITIES</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i460" class="foldit"><div class="descr"><p> The number of <a href="#i465" onclick="unfold('span:i465');">INEQUALITIES</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i462" onclick="swap_content('span:i462'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i462" onclick="swap_content('span:i462'); return false;"><b>N_RAYS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i462" class="foldit"><div class="descr"><p> The number of <a href="#i501" onclick="unfold('span:i501');">RAYS</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i463" onclick="swap_content('span:i463'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i463" onclick="swap_content('span:i463'); return false;"><b>POSITIVE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i463" class="foldit"><div class="descr"><p> True if all <a href="#i501" onclick="unfold('span:i501');">RAYS</a> of the cone have non-negative coordinates, 
 that is, if the pointed part of the cone lies entirely in the positive orthant.
 FIXME should we set POSITIVE = false for non-pointed cones?</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i470" onclick="swap_content('span:i470'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i470" onclick="swap_content('span:i470'); return false;"><b>RAY_LABELS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a><br/><div style="display: inline" id="span:i470" class="foldit"><div class="descr"><p> Unique names assigned to the <a href="#i501" onclick="unfold('span:i501');">RAYS</a>.
 If specified, they are shown by visualization tools instead of ray indices.</p><p> For a cone built from scratch, you should create this property by yourself,
 either manually in a text editor, or with a client program. If you build a cone with a construction client
 taking some other input cone(s), you can create the labels automatically if you
 call the client with a <em class="param">relabel</em> option. The exact format of the labels is dependent on the
 construction, and is described by the corresponding client.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i458" onclick="swap_content('span:i458'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i458" onclick="swap_content('span:i458'); return false;"><b>RAY_SEPARATORS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i458" class="foldit"><div class="descr"><p> The i-th row is the normal vector of a hyperplane separating the i-th vertex from the others.
 This property is a by-product of redundant point elimination algorithm.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i474" onclick="swap_content('span:i474'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i474" onclick="swap_content('span:i474'); return false;"><b>REL_INT_POINT</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i474" class="foldit"><div class="descr"><p> Relatively interior point.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i316" onclick="swap_content('span:i316'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i316" onclick="swap_content('span:i316'); return false;"><span class="category">Combinatorics</span></a></h3></div><div style="display: inline" id="span:i316" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i481" onclick="swap_content('span:i481'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i481" onclick="swap_content('span:i481'); return false;"><b>COMBINATORIAL_DIM</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i481" class="foldit"><div class="descr"><p> Combinatorial dimension</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i479" onclick="swap_content('span:i479'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i479" onclick="swap_content('span:i479'); return false;"><b>DUAL_GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i479" class="foldit"><div class="descr"><p> Facet-ridge graph. Dual to <a href="#i490" onclick="unfold('span:i490');">GRAPH</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i487" onclick="swap_content('span:i487'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i487" onclick="swap_content('span:i487'); return false;"><b>ESSENTIALLY_GENERIC</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i487" class="foldit"><div class="descr"><p> All intermediate polytopes (with respect to the given insertion order) in the beneath-and-beyond algorithm are simplicial.
 We have the implications: <a href="#i501" onclick="unfold('span:i501');">RAYS</a> in general position =&gt; ESSENTIALLY_GENERIC =&gt; <a href="#i492" onclick="unfold('span:i492');">SIMPLICIAL</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i484" onclick="swap_content('span:i484'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i484" onclick="swap_content('span:i484'); return false;"><b>F2_VECTOR</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Integer, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i484" class="foldit"><div class="descr"><p> The vector counting the number of incidences between pairs of faces.
 `f<sub>ik</sub>` is the number of incident pairs of `(i+1)`-faces and `(k+1)`-faces. 
 The main diagonal contains the <a href="#i495" onclick="unfold('span:i495');">F_VECTOR</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i478" onclick="swap_content('span:i478'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i478" onclick="swap_content('span:i478'); return false;"><b>FACETS_THRU_INPUT_RAYS</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i478" class="foldit"><div class="descr"><p> transposed <a href="#i489" onclick="unfold('span:i489');">INPUT_RAYS_IN_FACETS</a>
 Notice that this is a temporary property; it will not be stored in any file.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i482" onclick="swap_content('span:i482'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i482" onclick="swap_content('span:i482'); return false;"><b>FACETS_THRU_RAYS</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i482" class="foldit"><div class="descr"><p> transposed <a href="#i475" onclick="unfold('span:i475');">RAYS_IN_FACETS</a>
 Notice that this is a temporary property; it will not be stored in any file.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i483" onclick="swap_content('span:i483'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i483" onclick="swap_content('span:i483'); return false;"><b>FACET_SIZES</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i483" class="foldit"><div class="descr"><p> Number of incident rays for each facet.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i476" onclick="swap_content('span:i476'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i476" onclick="swap_content('span:i476'); return false;"><b>FLAG_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i476" class="foldit"><div class="descr"><p> Condensed form of the flag vector, containing all entries indexed by sparse sets in {0, ..., <a href="#i481" onclick="unfold('span:i481');">COMBINATORIAL_DIM</a>-1}
 in the following order: 
       (1, f<sub>0</sub>, f<sub>1</sub>, f<sub>2</sub>, f<sub>02</sub>, f<sub>3</sub>, f<sub>03</sub>, f<sub>13</sub>, f<sub>4</sub>, f<sub>04</sub>, f<sub>14</sub>, f<sub>24</sub>, f<sub>024</sub>, f<sub>5</sub>, ...).
 Use Dehn-Sommerville equations, via user function <a href="#i441" onclick="unfold('span:i441');">N_FLAGS</a>, to extend.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i495" onclick="swap_content('span:i495'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i495" onclick="swap_content('span:i495'); return false;"><b>F_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i495" class="foldit"><div class="descr"><p> The vector counting the number of faces (`f<sub>k</sub>` is the number of `(k+1)`-faces).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i490" onclick="swap_content('span:i490'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i490" onclick="swap_content('span:i490'); return false;"><b>GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i490" class="foldit"><div class="descr"><p> Vertex-edge graph obtained by intersecting the cone with a transversal hyperplane.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i486" onclick="swap_content('span:i486'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i486" onclick="swap_content('span:i486'); return false;"><b>HASSE_DIAGRAM</b>:
		</a><a href="graph.html#i11" onclick="unfold('span:i11');">graph::FaceLattice</a><br/><div style="display: inline" id="span:i486" class="foldit"><div class="descr"><p> The face lattice of the cone organized as a directed graph.
 Each node corresponds to some proper face of the cone.
 The nodes corresponding to the rays and facets appear in the same order
 as the elements of <a href="#i501" onclick="unfold('span:i501');">RAYS</a> and <a href="#i466" onclick="unfold('span:i466');">FACETS</a> properties.</p><p> Two special nodes represent the whole cone and the empty face.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i491" onclick="swap_content('span:i491'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i491" onclick="swap_content('span:i491'); return false;"><b>INEQUALITIES_THRU_RAYS</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i491" class="foldit"><div class="descr"><p> transposed <a href="#i493" onclick="unfold('span:i493');">RAYS_IN_INEQUALITIES</a>
 Notice that this is a temporary property; it will not be stored in any file.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i489" onclick="swap_content('span:i489'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i489" onclick="swap_content('span:i489'); return false;"><b>INPUT_RAYS_IN_FACETS</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i489" class="foldit"><div class="descr"><p> Input_ray-facet incidence matrix, with rows corresponding to facets and columns
 to input_rays. Input_rays and facets are numbered from 0 to <a href="#i507" onclick="unfold('span:i507');">N_INPUT_RAYS</a>-1 rsp.
 <a href="#i471" onclick="unfold('span:i471');">N_FACETS</a>-1, according to their order in <a href="#i503" onclick="unfold('span:i503');">INPUT_RAYS</a>
 rsp. <a href="#i466" onclick="unfold('span:i466');">FACETS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i480" onclick="swap_content('span:i480'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i480" onclick="swap_content('span:i480'); return false;"><b>N_RAY_FACET_INC</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i480" class="foldit"><div class="descr"><p> Number of pairs of incident vertices and facets.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i475" onclick="swap_content('span:i475'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i475" onclick="swap_content('span:i475'); return false;"><b>RAYS_IN_FACETS</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i475" class="foldit"><div class="descr"><p> Ray-facet incidence matrix, with rows corresponding to facets and columns
 to rays. Rays and facets are numbered from 0 to <a href="#i462" onclick="unfold('span:i462');">N_RAYS</a>-1 rsp.
 <a href="#i471" onclick="unfold('span:i471');">N_FACETS</a>-1, according to their order in <a href="#i501" onclick="unfold('span:i501');">RAYS</a> rsp. <a href="#i466" onclick="unfold('span:i466');">FACETS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i493" onclick="swap_content('span:i493'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i493" onclick="swap_content('span:i493'); return false;"><b>RAYS_IN_INEQUALITIES</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i493" class="foldit"><div class="descr"><p> Ray-inequality incidence matrix, with rows corresponding to facets and columns
 to rays. Rays and inequalities are numbered from 0 to <a href="#i462" onclick="unfold('span:i462');">N_RAYS</a>-1 rsp.
 <a href="#i460" onclick="unfold('span:i460');">N_INEQUALITIES</a>-1, according to their order in <a href="#i501" onclick="unfold('span:i501');">RAYS</a>
 rsp. <a href="#i465" onclick="unfold('span:i465');">INEQUALITIES</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i494" onclick="swap_content('span:i494'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i494" onclick="swap_content('span:i494'); return false;"><b>RAY_SIZES</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i494" class="foldit"><div class="descr"><p> Number of incident facets for each ray.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i477" onclick="swap_content('span:i477'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i477" onclick="swap_content('span:i477'); return false;"><b>SELF_DUAL</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i477" class="foldit"><div class="descr"><p> True if the cone is self-dual.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i485" onclick="swap_content('span:i485'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i485" onclick="swap_content('span:i485'); return false;"><b>SIMPLE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i485" class="foldit"><div class="descr"><p> True if the facets of the cone are simple. Dual to <a href="#i492" onclick="unfold('span:i492');">SIMPLICIAL</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i492" onclick="swap_content('span:i492'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i492" onclick="swap_content('span:i492'); return false;"><b>SIMPLICIAL</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i492" class="foldit"><div class="descr"><p> True if the facets of the cone are simplicial.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i488" onclick="swap_content('span:i488'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i488" onclick="swap_content('span:i488'); return false;"><b>SIMPLICIAL_CONE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i488" class="foldit"><div class="descr"><p> True if the cone is simplicial.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i320" onclick="swap_content('span:i320'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i320" onclick="swap_content('span:i320'); return false;"><span class="category">Geometry</span></a></h3></div><div style="display: inline" id="span:i320" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i500" onclick="swap_content('span:i500'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i500" onclick="swap_content('span:i500'); return false;"><b>CONE_AMBIENT_DIM</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i500" class="foldit"><div class="descr"><p> The dimension of the space in which the cone lives.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i506" onclick="swap_content('span:i506'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i506" onclick="swap_content('span:i506'); return false;"><b>INPUT_LINEALITY</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i506" class="foldit"><div class="descr"><p> (Non-homogenous) vectors whose linear span defines a subset of the lineality space of the cone; 
 redundancies are allowed.
 Dual to <a href="#i461" onclick="unfold('span:i461');">EQUATIONS</a>.</p><p> Input section only.  Ask for <a href="#i469" onclick="unfold('span:i469');">LINEALITY_SPACE</a> if 
 you want to compute a V-representation from an H-representation.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i503" onclick="swap_content('span:i503'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i503" onclick="swap_content('span:i503'); return false;"><b>INPUT_RAYS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i503" class="foldit"><div class="descr"><p> (Non-homogenous) vectors whose positive span form the cone; redundancies are allowed.
 Dual to <a href="#i465" onclick="unfold('span:i465');">INEQUALITIES</a>.</p><p> Input section only.  Ask for <a href="#i501" onclick="unfold('span:i501');">RAYS</a> if you want to compute a V-representation from an H-representation.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i504" onclick="swap_content('span:i504'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i504" onclick="swap_content('span:i504'); return false;"><b>N_INPUT_LINEALITY</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i504" class="foldit"><div class="descr"><p> The number of <a href="#i506" onclick="unfold('span:i506');">INPUT_LINEALITY</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i507" onclick="swap_content('span:i507'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i507" onclick="swap_content('span:i507'); return false;"><b>N_INPUT_RAYS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i507" class="foldit"><div class="descr"><p> The number of <a href="#i503" onclick="unfold('span:i503');">INPUT_RAYS</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i502" onclick="swap_content('span:i502'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i502" onclick="swap_content('span:i502'); return false;"><b>ONE_RAY</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i502" class="foldit"><div class="descr"><p> A ray of a pointed cone.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i505" onclick="swap_content('span:i505'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i505" onclick="swap_content('span:i505'); return false;"><b>POINTED</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i505" class="foldit"><div class="descr"><p> True if the cone does not contain a linear subspace.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i501" onclick="swap_content('span:i501'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i501" onclick="swap_content('span:i501'); return false;"><b>RAYS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i501" class="foldit"><div class="descr"><p> Rays of the cone. No redundancies are allowed.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i314" onclick="swap_content('span:i314'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i314" onclick="swap_content('span:i314'); return false;"><span class="category">Symmetric cones</span></a></h3></div><div style="display: inline" id="span:i314" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i456" onclick="swap_content('span:i456'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i456" onclick="swap_content('span:i456'); return false;"><b>GROUP</b>:
		</a><a href="group.html#i10" onclick="unfold('span:i10');">group::GroupOfCone</a><br/><div style="display: inline" id="span:i456" class="foldit"><div class="descr"><p> A group acting on the cone via permutation of its 
 rays (<a href="#" onclick="unfold('span:');" class="invalid">DOMAIN=1</a>), facets (<a href="#" onclick="unfold('span:');" class="invalid">DOMAIN=2</a>), or
 coordinates (<a href="#" onclick="unfold('span:');" class="invalid">DOMAIN=3</a>). </p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i317" onclick="swap_content('span:i317'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i317" onclick="swap_content('span:i317'); return false;"><span class="category">Triangulation and volume</span></a></h3></div><div style="display: inline" id="span:i317" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i497" onclick="swap_content('span:i497'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i497" onclick="swap_content('span:i497'); return false;"><b>TRIANGULATION</b>:
		</a><a href="topaz.html#i17" onclick="unfold('span:i17');">topaz::SimplicialComplex</a><br/><div style="display: inline" id="span:i497" class="foldit"><div class="descr"><p> Some triangulation of the cone using only its <a href="#i501" onclick="unfold('span:i501');">RAYS</a>.</p></div><h4>Properties of TRIANGULATION</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i694" onclick="swap_content('span:i694'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i694" onclick="swap_content('span:i694'); return false;"><b>GKZ_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i694" class="foldit"><div class="descr"><p> GKZ-vector 
    See Chapter 7 in Gelfand, Kapranov, and Zelevinsky:
    Discriminants, Resultants and Multidimensional Determinants, Birkhäuser 1994</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i696" onclick="swap_content('span:i696'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i696" onclick="swap_content('span:i696'); return false;"><b>REFINED_SPLITS</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i696" class="foldit"><div class="descr"><p> The splits that are coarsenings of the current <a href="#i497" onclick="unfold('span:i497');">TRIANGULATION</a>.
 If the triangulation is regular these form the unique split decomposition of
 the corresponding weight function.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i693" onclick="swap_content('span:i693'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i693" onclick="swap_content('span:i693'); return false;"><b>WEIGHTS</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i693" class="foldit"><div class="descr"><p> Weight vector to construct a regular <a href="#i497" onclick="unfold('span:i497');">TRIANGULATION</a>.
 Must be generic.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i695" onclick="swap_content('span:i695'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i695" onclick="swap_content('span:i695'); return false;"><span class="category">Basic properties</span></a></h3></div><div style="display: inline" id="span:i695" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i709" onclick="swap_content('span:i709'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i709" onclick="swap_content('span:i709'); return false;"><b>BOUNDARY</b>:
		</a><a href="topaz.html#i17" onclick="unfold('span:i17');">topaz::SimplicialComplex</a><br/><div style="display: inline" id="span:i709" class="foldit"><div class="descr"><p> Specialization of <a href="topaz.html#i163" onclick="unfold('span:i163');">topaz::SimplicialComplex::BOUNDARY</a> for Cone::TRIANGULATION</p></div><h4>Properties of BOUNDARY</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i715" onclick="swap_content('span:i715'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i715" onclick="swap_content('span:i715'); return false;"><b>FACET_TRIANGULATIONS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Set&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i715" class="foldit"><div class="descr"><p> For each facet the set of simplex indices of BOUNDARY that triangulate it.</p></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i496" onclick="swap_content('span:i496'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i496" onclick="swap_content('span:i496'); return false;"><b>TRIANGULATION_INT</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Set&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i496" class="foldit"><div class="descr"><p> Similar to <a href="#i497" onclick="unfold('span:i497');">TRIANGULATION</a>, but using <a href="#i646" onclick="unfold('span:i646');">POINTS</a>.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i313" onclick="swap_content('span:i313'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i313" onclick="swap_content('span:i313'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i313" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i452" onclick="swap_content('span:i452'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i452" onclick="swap_content('span:i452'); return false;"><b>FTR_CYCLIC_NORMAL</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;List&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i452" class="foldit"><div class="descr"><p> Reordered transposed <a href="#i475" onclick="unfold('span:i475');">RAYS_IN_FACETS</a>. Dual to <a href="#i543" onclick="unfold('span:i543');">VIF_CYCLIC_NORMAL</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i453" onclick="swap_content('span:i453'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i453" onclick="swap_content('span:i453'); return false;"><b>NEIGHBOR_FACETS_CYCLIC_NORMAL</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;List&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i453" class="foldit"><div class="descr"><p> Reordered <a href="#i479" onclick="unfold('span:i479');">DUAL_GRAPH</a> for 3d-cones.
 The neighbor facets are listed in the order corresponding to <a href="#i454" onclick="unfold('span:i454');">RIF_CYCLIC_NORMAL</a>,
 so that the first two vertices in RIF_CYCLIC_NORMAL make up the ridge to the first neighbor
 facet and so on.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i455" onclick="swap_content('span:i455'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i455" onclick="swap_content('span:i455'); return false;"><b>NEIGHBOR_RAYS_CYCLIC_NORMAL</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;List&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i455" class="foldit"><div class="descr"><p> Reordered <a href="#i490" onclick="unfold('span:i490');">GRAPH</a>. Dual to <a href="#i453" onclick="unfold('span:i453');">NEIGHBOR_FACETS_CYCLIC_NORMAL</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i454" onclick="swap_content('span:i454'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i454" onclick="swap_content('span:i454'); return false;"><b>RIF_CYCLIC_NORMAL</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Array&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i454" class="foldit"><div class="descr"><p> Reordered <a href="#i475" onclick="unfold('span:i475');">RAYS_IN_FACETS</a> for 2d and 3d-cones.
 Rays are listed in the order of their appearance
 when traversing the facet border counterclockwise seen from outside of the origin.</p></div></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of Cone</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i311" onclick="swap_content('span:i311'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i311" onclick="swap_content('span:i311'); return false;"><b>AMBIENT_DIM</b></a>
			()  

			<div style="display: inline" id="span:i311" class="foldit"><br/><div class="descr_func"><div class="descr"><p> FIXME why do the following clients use different methods to determine their type?</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i310" onclick="swap_content('span:i310'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i310" onclick="swap_content('span:i310'); return false;"><b>DIM</b></a>
			()  

			<div style="display: inline" id="span:i310" class="foldit"><br/><div class="descr_func"><div class="undoc"><p>UNDOCUMENTED</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i312" onclick="swap_content('span:i312'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i312" onclick="swap_content('span:i312'); return false;"><span class="category">Backward compatibility</span></a></h3></div><div style="display: inline" id="span:i312" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i451" onclick="swap_content('span:i451'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i451" onclick="swap_content('span:i451'); return false;"><b>DIAMETER</b></a>
			()  

			<div style="display: inline" id="span:i451" class="foldit"><br/><div class="descr_func"><div class="descr"><p> The diameter of the <a href="#i490" onclick="unfold('span:i490');">GRAPH</a> of the polytope</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i449" onclick="swap_content('span:i449'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i449" onclick="swap_content('span:i449'); return false;"><b>DUAL_DIAMETER</b></a>
			()  

			<div style="display: inline" id="span:i449" class="foldit"><br/><div class="descr_func"><div class="descr"><p> The diameter of the <a href="#i479" onclick="unfold('span:i479');">DUAL_GRAPH</a></p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i448" onclick="swap_content('span:i448'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i448" onclick="swap_content('span:i448'); return false;"><b>DUAL_TRIANGLE_FREE</b></a>
			()  

			<div style="display: inline" id="span:i448" class="foldit"><br/><div class="descr_func"><div class="descr"><p> True if the <a href="#i479" onclick="unfold('span:i479');">DUAL_GRAPH</a> contains no triangle</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i450" onclick="swap_content('span:i450'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i450" onclick="swap_content('span:i450'); return false;"><b>TRIANGLE_FREE</b></a>
			()  

			<div style="display: inline" id="span:i450" class="foldit"><br/><div class="descr_func"><div class="descr"><p> True if the <a href="#i490" onclick="unfold('span:i490');">GRAPH</a> contains no triangle</p></div></div><div class="level3"/></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i309" onclick="swap_content('span:i309'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i309" onclick="swap_content('span:i309'); return false;"><span class="category">Combinatorics</span></a></h3></div><div style="display: inline" id="span:i309" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i446" onclick="swap_content('span:i446'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i446" onclick="swap_content('span:i446'); return false;"><b>CONNECTIVITY</b></a>
			()  

			<div style="display: inline" id="span:i446" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Connectivity of the <a href="#i490" onclick="unfold('span:i490');">GRAPH</a>
 this is the minimum number of nodes that have to be removed from the <a href="#i490" onclick="unfold('span:i490');">GRAPH</a> to make it disconnected</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i445" onclick="swap_content('span:i445'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i445" onclick="swap_content('span:i445'); return false;"><b>DUAL_CONNECTIVITY</b></a>
			()  

			<div style="display: inline" id="span:i445" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Connectivity of the <a href="#i479" onclick="unfold('span:i479');">DUAL_GRAPH</a>
 this is the minimum number of nodes that have to be removed from the <a href="#i479" onclick="unfold('span:i479');">DUAL_GRAPH</a> to make it disconnected</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i447" onclick="swap_content('span:i447'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i447" onclick="swap_content('span:i447'); return false;"><b>DUAL_EVEN</b></a>
			()  

			<div style="display: inline" id="span:i447" class="foldit"><br/><div class="descr_func"><div class="descr"><p> True if the <a href="#i479" onclick="unfold('span:i479');">DUAL_GRAPH</a> is bipartite</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i444" onclick="swap_content('span:i444'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i444" onclick="swap_content('span:i444'); return false;"><b>EVEN</b></a>
			()  

			<div style="display: inline" id="span:i444" class="foldit"><br/><div class="descr_func"><div class="descr"><p> True if the <a href="#i490" onclick="unfold('span:i490');">GRAPH</a> is bipartite</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i442" onclick="swap_content('span:i442'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i442" onclick="swap_content('span:i442'); return false;"><b>FACET_DEGREES</b></a>
			()  

			
				→ Vector&lt;Int&gt;<div style="display: inline" id="span:i442" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Facet degrees of the polytope.
 The <em class="u">degree</em> of a facet is the number of adjacent facets.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Int&gt;</a></td><td><div class="descr"><div>- in the same order as <a href="#i466" onclick="unfold('span:i466');">FACETS</a></div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i441" onclick="swap_content('span:i441'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i441" onclick="swap_content('span:i441'); return false;"><b>N_FLAGS</b></a>
			(type ...)  

			<div style="display: inline" id="span:i441" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Determine the number of flags of a given type.
 <em class="param">type</em> must belong to {0,...,<a href="#i481" onclick="unfold('span:i481');">COMBINATORIAL_DIM</a>-1}.
 Example: "N_FLAGS(0,3,4)" determines the entry f<sub>034</sub> of the flag vector.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">type ...</td><td><div class="descr"><div>flag type</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i443" onclick="swap_content('span:i443'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i443" onclick="swap_content('span:i443'); return false;"><b>VERTEX_DEGREES</b></a>
			()  

			
				→ Vector&lt;Int&gt;<div style="display: inline" id="span:i443" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Ray degrees of the cone</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Int&gt;</a></td><td><div class="descr"><div>- in the same order as <a href="#i501" onclick="unfold('span:i501');">RAYS</a></div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i308" onclick="swap_content('span:i308'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i308" onclick="swap_content('span:i308'); return false;"><span class="category">Topology</span></a></h3></div><div style="display: inline" id="span:i308" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i440" onclick="swap_content('span:i440'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i440" onclick="swap_content('span:i440'); return false;"><b>DUAL_GRAPH_SIGNATURE</b></a>
			()  

			<div style="display: inline" id="span:i440" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Difference of the black and white nodes if the <a href="#i479" onclick="unfold('span:i479');">DUAL_GRAPH</a> is <a href="graph.html#i94" onclick="unfold('span:i94');">BIPARTITE</a>.
 Otherwise -1.</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i439" onclick="swap_content('span:i439'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i439" onclick="swap_content('span:i439'); return false;"><b>GRAPH_SIGNATURE</b></a>
			()  

			<div style="display: inline" id="span:i439" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Difference of the black and white nodes if the <a href="#i490" onclick="unfold('span:i490');">GRAPH</a> is <a href="graph.html#i94" onclick="unfold('span:i94');">BIPARTITE</a>.
 Otherwise -1.</p></div></div><div class="level3"/></div></div></div></li></ul></div></div></div></li></ul><h4>Permutations of Cone</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i318" onclick="swap_content('span:i318'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i318" onclick="swap_content('span:i318'); return false;"><b>FacetPerm</b></a><div style="display: inline" id="span:i318" class="foldit"><div class="undoc"><p>UNDOCUMENTED</p></div><h4>Properties of FacetPerm</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i663" onclick="swap_content('span:i663'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i663" onclick="swap_content('span:i663'); return false;"><b>PERMUTATION</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i663" class="foldit"><div class="descr"><p> Transforming <a href="#i466" onclick="unfold('span:i466');">FACETS</a> from this into basic object</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i319" onclick="swap_content('span:i319'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i319" onclick="swap_content('span:i319'); return false;"><b>VertexPerm</b></a><div style="display: inline" id="span:i319" class="foldit"><div class="undoc"><p>UNDOCUMENTED</p></div><h4>Properties of VertexPerm</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i664" onclick="swap_content('span:i664'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i664" onclick="swap_content('span:i664'); return false;"><b>PERMUTATION</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i664" class="foldit"><div class="descr"><p> Transforming <a href="#i501" onclick="unfold('span:i501');">RAYS</a> from this into basic object</p></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i44" onclick="swap_content('span:i44'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i44" onclick="swap_content('span:i44'); return false;"><span class="object">Cone&lt;Float&gt;</span></a></h3></div><div style="display: inline" id="span:i44" class="foldit"><b>derived from: </b><a href="#i34" onclick="unfold('span:i34');">Cone</a><br/><div class="level3"/><h4>Properties of Cone&lt;Float&gt;</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i397" onclick="swap_content('span:i397'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i397" onclick="swap_content('span:i397'); return false;"><b>EPSILON</b>:
		</a><a href="common.html#i53" onclick="unfold('span:i53');">common::Float</a><br/><div style="display: inline" id="span:i397" class="foldit"><div class="descr"><p> Threshold for zero test for scalar products (e.g. vertex * facet normal)</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i47" onclick="swap_content('span:i47'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i47" onclick="swap_content('span:i47'); return false;"><span class="object">Cone&lt;Rational&gt;</span></a></h3></div><div style="display: inline" id="span:i47" class="foldit"><b>derived from: </b><a href="#i34" onclick="unfold('span:i34');">Cone</a><br/><div class="level3"/><h4>Properties of Cone&lt;Rational&gt;</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i405" onclick="swap_content('span:i405'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i405" onclick="swap_content('span:i405'); return false;"><b>GORENSTEIN_CONE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i405" class="foldit"><div class="descr"><p> A cone is <a href="#i405" onclick="unfold('span:i405');">GORENSTEIN_CONE</a> if it is Q-Gorenstein with index one</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i404" onclick="swap_content('span:i404'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i404" onclick="swap_content('span:i404'); return false;"><b>HILBERT_BASIS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Integer, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i404" class="foldit"><div class="descr"><p> The Hilbert basis spanned of the cone spanned by P x {1}</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i403" onclick="swap_content('span:i403'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i403" onclick="swap_content('span:i403'); return false;"><b>HOMOGENEOUS</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i403" class="foldit"><div class="descr"><p> true if the primitive generators of the rays lie on an affine hyperplane in the span of the rays</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i407" onclick="swap_content('span:i407'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i407" onclick="swap_content('span:i407'); return false;"><b>N_HILBERT_BASIS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i407" class="foldit"><div class="descr"><p> The number of elements of <a href="#i404" onclick="unfold('span:i404');">HILBERT_BASIS</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i402" onclick="swap_content('span:i402'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i402" onclick="swap_content('span:i402'); return false;"><b>Q_GORENSTEIN_CONE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i402" class="foldit"><div class="descr"><p> A cone is Q-Gorenstein if all primitive generators of the cone lie in an affine hyperplane spanned by a lattice functional in the dual cone (but not in the lineality space of the dual cone).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i406" onclick="swap_content('span:i406'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i406" onclick="swap_content('span:i406'); return false;"><b>Q_GORENSTEIN_CONE_INDEX</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i406" class="foldit"><div class="descr"><p> If a cone is Q-Gorenstein, then its index is the common lattice height of the primitive generators with respect to the origin. Otherwise <a href="#i406" onclick="unfold('span:i406');">Q_GORENSTEIN_CONE_INDEX</a> is undefined.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i408" onclick="swap_content('span:i408'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i408" onclick="swap_content('span:i408'); return false;"><b>SMOOTH_CONE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i408" class="foldit"><div class="descr"><p> A cone is smooth is the primitive generators are part of a lattice basis</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i32" onclick="swap_content('span:i32'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i32" onclick="swap_content('span:i32'); return false;"><span class="object">GeometricGraph</span></a></h3></div><div style="display: inline" id="span:i32" class="foldit"><div class="descr"><p> An undirected graph with given node coordinates and a bounding box</p></div><b>derived from: </b><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div class="level3"/><h4>Properties of GeometricGraph</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i299" onclick="swap_content('span:i299'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i299" onclick="swap_content('span:i299'); return false;"><b>BOUNDING_BOX</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i299" class="foldit"><div class="descr"><p> Since a Voronoi polyhedron is unbounded it must be artificially bounded for visualization purposes.
 Allowed is any set of hyperplanes which makes the projection onto the last d-1 coordinates bounded.
 By default, these are the vertical facets of a suitably scaled cube.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i300" onclick="swap_content('span:i300'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i300" onclick="swap_content('span:i300'); return false;"><b>COORDINATES</b>:
		</a><a href="common.html#i46" onclick="unfold('span:i46');">common::NodeMap&lt;Undirected, Vector&lt;Scalar&gt;&gt;</a><br/><div style="display: inline" id="span:i300" class="foldit"><div class="descr"><p> The coordinates of the nodes of the graph.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i36" onclick="swap_content('span:i36'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i36" onclick="swap_content('span:i36'); return false;"><span class="object">GroebnerBasis</span></a></h3></div><div style="display: inline" id="span:i36" class="foldit"><div class="descr"><p> The Groebner basis of the homogeneous toric ideal associated to the polytope,
 the term order is given in matrix form.</p></div><div class="level3"/><h4>Properties of GroebnerBasis</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i332" onclick="swap_content('span:i332'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i332" onclick="swap_content('span:i332'); return false;"><b>BASIS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Integer, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i332" class="foldit"><div class="descr"><p> The Groebner basis for a defined term order</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i331" onclick="swap_content('span:i331'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i331" onclick="swap_content('span:i331'); return false;"><b>TERM_ORDER_MATRIX</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Integer, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i331" class="foldit"><div class="descr"><p> The term order in matrix form;
 if not square, then a tie breaker is used.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i330" onclick="swap_content('span:i330'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i330" onclick="swap_content('span:i330'); return false;"><b>TERM_ORDER_NAME</b>:
		</a><a href="common.html#i10" onclick="unfold('span:i10');">common::String</a><br/><div style="display: inline" id="span:i330" class="foldit"><div class="descr"><p> A term order by name;
 allowed acronyms are <code>lex</code>, <code>deglex</code> and <code>degrevlex</code>.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i37" onclick="swap_content('span:i37'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i37" onclick="swap_content('span:i37'); return false;"><span class="object">LatticePolytope</span></a></h3></div><div style="display: inline" id="span:i37" class="foldit"><div class="descr"><p> Polytope all of whose vertex coordinates are integral</p></div><b>derived from: </b><a href="#i43" onclick="unfold('span:i43');">Polytope&lt;Rational&gt;</a><br/><div class="level3"/><h4>Properties of LatticePolytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i354" onclick="swap_content('span:i354'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i354" onclick="swap_content('span:i354'); return false;"><b>CANONICAL</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i354" class="foldit"><div class="descr"><p> The polytope is <em class="u">canonical</em> if there is exactly one interior lattice point.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i343" onclick="swap_content('span:i343'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i343" onclick="swap_content('span:i343'); return false;"><b>COMPRESSED</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i343" class="foldit"><div class="descr"><p> True if the facet width is one.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i348" onclick="swap_content('span:i348'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i348" onclick="swap_content('span:i348'); return false;"><b>EHRHART_POLYNOMIAL_COEFF</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Rational&gt;</a><br/><div style="display: inline" id="span:i348" class="foldit"><div class="descr"><p> The coefficients of the Ehrhart polynomial starting at the constant coefficient.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i351" onclick="swap_content('span:i351'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i351" onclick="swap_content('span:i351'); return false;"><b>FACET_VERTEX_LATTICE_DISTANCES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Integer, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i351" class="foldit"><div class="descr"><p> The entry (i,j) equals the lattice distance of vertex j from facet i.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i355" onclick="swap_content('span:i355'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i355" onclick="swap_content('span:i355'); return false;"><b>FACET_WIDTH</b>:
		</a><a href="common.html#i33" onclick="unfold('span:i33');">common::Integer</a><br/><div style="display: inline" id="span:i355" class="foldit"><div class="descr"><p> The maximal integral width of the polytope with respect to the facet normals.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i342" onclick="swap_content('span:i342'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i342" onclick="swap_content('span:i342'); return false;"><b>FACET_WIDTHS</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i342" class="foldit"><div class="descr"><p> The integral width of the polytope with respect to each facet normal.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i356" onclick="swap_content('span:i356'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i356" onclick="swap_content('span:i356'); return false;"><b>GORENSTEIN</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i356" class="foldit"><div class="descr"><p> The polytope is <em class="u">Gorenstein</em> if a dilation of the polytope is reflexive up to translation.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i353" onclick="swap_content('span:i353'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i353" onclick="swap_content('span:i353'); return false;"><b>GORENSTEIN_INDEX</b>:
		</a><a href="common.html#i33" onclick="unfold('span:i33');">common::Integer</a><br/><div style="display: inline" id="span:i353" class="foldit"><div class="descr"><p> If the polytope is Gorenstein then this is the multiple such that the polytope is reflexive.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i338" onclick="swap_content('span:i338'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i338" onclick="swap_content('span:i338'); return false;"><b>GORENSTEIN_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i338" class="foldit"><div class="descr"><p> If the polytope is Gorenstein, then this is the unique interior lattice point
 in the multiple of the polytope that is reflexive.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i349" onclick="swap_content('span:i349'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i349" onclick="swap_content('span:i349'); return false;"><b>GROEBNER_BASIS</b>:
		</a><a href="#i36" onclick="unfold('span:i36');">GroebnerBasis</a><br/><div style="display: inline" id="span:i349" class="foldit"><div class="descr"><p> The Groebner basis for the toric ideal associated to the lattice points in the polytope using any term order.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i335" onclick="swap_content('span:i335'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i335" onclick="swap_content('span:i335'); return false;"><b>H_STAR_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i335" class="foldit"><div class="descr"><p> The coefficients of the h^*-polynomial starting at the constant coefficient</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i350" onclick="swap_content('span:i350'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i350" onclick="swap_content('span:i350'); return false;"><b>LATTICE_BASIS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Rational, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i350" class="foldit"><div class="descr"><p> <a href="#i555" onclick="unfold('span:i555');">VERTICES</a> are interpreted as coefficient vectors for this basis
 given in affine form
 assumed to the the standard basis if not explicitely specified</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i339" onclick="swap_content('span:i339'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i339" onclick="swap_content('span:i339'); return false;"><b>LATTICE_CODEGREE</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i339" class="foldit"><div class="descr"><p> <a href="#" onclick="unfold('span:');" class="invalid">POLYTOPE_DIM</a>+1-<a href="#i345" onclick="unfold('span:i345');">LATTICE_DEGREE</a> or the smallest integer k such that k*P has an interior lattice point.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i345" onclick="swap_content('span:i345'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i345" onclick="swap_content('span:i345'); return false;"><b>LATTICE_DEGREE</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i345" class="foldit"><div class="descr"><p> The degree of the h*-polynomial or Ehrhart polynomial.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i337" onclick="swap_content('span:i337'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i337" onclick="swap_content('span:i337'); return false;"><b>LATTICE_EMPTY</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i337" class="foldit"><div class="descr"><p> True if the polytope contains no lattice points other than the vertices.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i346" onclick="swap_content('span:i346'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i346" onclick="swap_content('span:i346'); return false;"><b>LATTICE_VOLUME</b>:
		</a><a href="common.html#i33" onclick="unfold('span:i33');">common::Integer</a><br/><div style="display: inline" id="span:i346" class="foldit"><div class="descr"><p> The normalized volume of the polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i347" onclick="swap_content('span:i347'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i347" onclick="swap_content('span:i347'); return false;"><b>NORMAL</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i347" class="foldit"><div class="descr"><p> The polytope is <em class="u">normal</em> if the cone spanned by P x {1} is generated in height 1.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i336" onclick="swap_content('span:i336'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i336" onclick="swap_content('span:i336'); return false;"><b>REFLEXIVE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i336" class="foldit"><div class="descr"><p> True if the polytope and its dual have integral vertices.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i340" onclick="swap_content('span:i340'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i340" onclick="swap_content('span:i340'); return false;"><b>SMOOTH</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i340" class="foldit"><div class="descr"><p> The polytope is <em class="u">smooth</em> if the associated projective variety is smooth; the determinant of the edge directions is +/-1 at every vertex.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i341" onclick="swap_content('span:i341'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i341" onclick="swap_content('span:i341'); return false;"><b>TERMINAL</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i341" class="foldit"><div class="descr"><p> The polytope is <em class="u">terminal</em> if there is exactly one interior lattice point and all other lattice points are vertices.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i352" onclick="swap_content('span:i352'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i352" onclick="swap_content('span:i352'); return false;"><b>VERY_AMPLE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i352" class="foldit"><div class="descr"><p> The polytope is <em class="u">very ample</em> if the Hilbert Basis of the cone spanned by the edge-directions of any vertex lies inside the polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i344" onclick="swap_content('span:i344'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i344" onclick="swap_content('span:i344'); return false;"><span class="category">Combinatorics</span></a></h3></div><div style="display: inline" id="span:i344" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i510" onclick="swap_content('span:i510'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i510" onclick="swap_content('span:i510'); return false;"><b>GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i510" class="foldit"><div class="descr"><p> Specialization of <a href="#" onclick="unfold('span:');" class="ambiguous">Polytope::GRAPH</a> for LatticePolytope</p></div><h4>Properties of GRAPH</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i697" onclick="swap_content('span:i697'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i697" onclick="swap_content('span:i697'); return false;"><b>LATTICE_EDGE_LENGTHS</b>:
		</a><a href="common.html#i25" onclick="unfold('span:i25');">common::EdgeMap&lt;Undirected, Integer&gt;</a><br/><div style="display: inline" id="span:i697" class="foldit"><div class="descr"><p> the lattice lengths of the edges of the polytope
 i.e. for each edge one less than the number of lattice points on that edge</p></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of LatticePolytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i334" onclick="swap_content('span:i334'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i334" onclick="swap_content('span:i334'); return false;"><b>POLYTOPE_IN_STD_BASIS</b></a>
			()  

			<div style="display: inline" id="span:i334" class="foldit"><br/><div class="descr_func"><div class="undoc"><p>UNDOCUMENTED</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i333" onclick="swap_content('span:i333'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i333" onclick="swap_content('span:i333'); return false;"><span class="category">Lattice polytopes</span></a></h3></div><div style="display: inline" id="span:i333" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i509" onclick="swap_content('span:i509'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i509" onclick="swap_content('span:i509'); return false;"><b>FACET_POINT_LATTICE_DISTANCES</b></a>
			(v)  

			
				→ Vector&lt;Integer&gt;<div style="display: inline" id="span:i509" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Vector containing the distances of a given point <em class="param">v</em> from all facets</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Rational&gt;</a></td><td class="param">v</td><td><div class="descr"><div>point in the ambient space of the polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Integer&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i508" onclick="swap_content('span:i508'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i508" onclick="swap_content('span:i508'); return false;"><b>N_LATTICE_POINTS_IN_DILATION</b></a>
			(n)  

			<div style="display: inline" id="span:i508" class="foldit"><br/><div class="descr_func"><div class="descr"><p> The number of <a href="#i629" onclick="unfold('span:i629');">LATTICE_POINTS</a> in the <em class="param">n</em>-th dilation of the polytope</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>dilation factor</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i266" onclick="swap_content('span:i266'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i266" onclick="swap_content('span:i266'); return false;"><span class="object">LinearProgram</span></a></h3></div><div style="display: inline" id="span:i266" class="foldit"><b>Category: </b>Optimization<br/><div class="descr"><p> A linear program specified by a linear or abstract objective function</p></div><div class="level3"/><h4>Properties of LinearProgram</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i614" onclick="swap_content('span:i614'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i614" onclick="swap_content('span:i614'); return false;"><b>ABSTRACT_OBJECTIVE</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i614" class="foldit"><div class="descr"><p> Abstract objective function.  Defines a direction for each edge such that each non-empty
 face has a unique source and a unique sink. 
 The i-th element is the value of the objective function at vertex number i.
 Only defined for bounded polytopes.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i609" onclick="swap_content('span:i609'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i609" onclick="swap_content('span:i609'); return false;"><b>DIRECTED_GRAPH</b>:
		</a><a href="graph.html#i12" onclick="unfold('span:i12');">graph::Graph&lt;Directed&gt;</a><br/><div style="display: inline" id="span:i609" class="foldit"><div class="descr"><p> Subgraph of <a href="#" onclick="unfold('span:');" class="ambiguous">Polytope::GRAPH</a>. Consists only of directed arcs along which the value of the objective function increases.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i610" onclick="swap_content('span:i610'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i610" onclick="swap_content('span:i610'); return false;"><b>LINEAR_OBJECTIVE</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i610" class="foldit"><div class="descr"><p> Linear objective function. In d-space a linear objective function is given by a (d+1)-vector. 
 The first coordinate specifies a constant that is added to the resulting value.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i619" onclick="swap_content('span:i619'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i619" onclick="swap_content('span:i619'); return false;"><b>MAXIMAL_FACE</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i619" class="foldit"><div class="descr"><p> Indices of vertices at which the maximum of the objective function is attained.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i618" onclick="swap_content('span:i618'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i618" onclick="swap_content('span:i618'); return false;"><b>MAXIMAL_VALUE</b>:
		</a>Scalar<br/><div style="display: inline" id="span:i618" class="foldit"><div class="descr"><p> Maximum value of the objective function. Negated if linear problem is unbounded.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i611" onclick="swap_content('span:i611'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i611" onclick="swap_content('span:i611'); return false;"><b>MAXIMAL_VERTEX</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i611" class="foldit"><div class="descr"><p> Coordinates of a (possibly not unique) affine vertex at which the maximum of the objective function is attained.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i617" onclick="swap_content('span:i617'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i617" onclick="swap_content('span:i617'); return false;"><b>MINIMAL_FACE</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i617" class="foldit"><div class="descr"><p> Similar to <a href="#i619" onclick="unfold('span:i619');">MAXIMAL_FACE</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i613" onclick="swap_content('span:i613'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i613" onclick="swap_content('span:i613'); return false;"><b>MINIMAL_VALUE</b>:
		</a>Scalar<br/><div style="display: inline" id="span:i613" class="foldit"><div class="descr"><p> Similar to <a href="#i618" onclick="unfold('span:i618');">MAXIMAL_VALUE</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i616" onclick="swap_content('span:i616'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i616" onclick="swap_content('span:i616'); return false;"><b>MINIMAL_VERTEX</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i616" class="foldit"><div class="descr"><p> Similar to <a href="#i611" onclick="unfold('span:i611');">MAXIMAL_VERTEX</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i615" onclick="swap_content('span:i615'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i615" onclick="swap_content('span:i615'); return false;"><b>RANDOM_EDGE_EPL</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Rational&gt;</a><br/><div style="display: inline" id="span:i615" class="foldit"><div class="descr"><p> Expected average path length for a simplex algorithm employing "random edge" pivoting strategy.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i612" onclick="swap_content('span:i612'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i612" onclick="swap_content('span:i612'); return false;"><span class="category">Unbounded polyhedra</span></a></h3></div><div style="display: inline" id="span:i612" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i688" onclick="swap_content('span:i688'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i688" onclick="swap_content('span:i688'); return false;"><b>DIRECTED_BOUNDED_GRAPH</b>:
		</a><a href="graph.html#i12" onclick="unfold('span:i12');">graph::Graph&lt;Directed&gt;</a><br/><div style="display: inline" id="span:i688" class="foldit"><div class="descr"><p> Subgraph of <a href="#i511" onclick="unfold('span:i511');">BOUNDED_GRAPH</a>. Consists only of directed arcs along which the value of the objective function increases.</p></div></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of LinearProgram</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i608" onclick="swap_content('span:i608'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i608" onclick="swap_content('span:i608'); return false;"><b>VERTEX_IN_DEGREES</b></a>
			()  

			<div style="display: inline" id="span:i608" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Array of in-degrees for all nodes of <a href="#i609" onclick="unfold('span:i609');">DIRECTED_GRAPH</a>
 or numbers of objective decreasing edges at each vertex</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i607" onclick="swap_content('span:i607'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i607" onclick="swap_content('span:i607'); return false;"><b>VERTEX_OUT_DEGREES</b></a>
			()  

			<div style="display: inline" id="span:i607" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Array of out-degrees for all nodes of <a href="#i609" onclick="unfold('span:i609');">DIRECTED_GRAPH</a>
 or numbers of objective increasing edges at each vertex</p></div></div><div class="level3"/></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i49" onclick="swap_content('span:i49'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i49" onclick="swap_content('span:i49'); return false;"><span class="object">PointConfiguration</span></a></h3></div><div style="display: inline" id="span:i49" class="foldit"><div class="descr"><p> The object point configuration also deals with non-convex finite point sets.</p></div><div class="level3"/><h4>Properties of PointConfiguration</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i432" onclick="swap_content('span:i432'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i432" onclick="swap_content('span:i432'); return false;"><b>SPLITS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i432" class="foldit"><div class="descr"><p> The splits of the point configuration, i.e., hyperplanes cutting the configuration in
 two parts such that we have a regular subdivision.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i426" onclick="swap_content('span:i426'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i426" onclick="swap_content('span:i426'); return false;"><b>SPLIT_COMPATIBILITY_GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i426" class="foldit"><div class="descr"><p> Two <a href="#i432" onclick="unfold('span:i432');">SPLITS</a> are compatible if the defining hyperplanes do not intersect in the
 interior of the point configuration.  This defines a graph.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i433" onclick="swap_content('span:i433'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i433" onclick="swap_content('span:i433'); return false;"><span class="category">Basic Properties</span></a></h3></div><div style="display: inline" id="span:i433" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i661" onclick="swap_content('span:i661'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i661" onclick="swap_content('span:i661'); return false;"><b>MULTIPLE_POINTS</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i661" class="foldit"><div class="descr"><p> Tells if there exists multiple points.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i428" onclick="swap_content('span:i428'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i428" onclick="swap_content('span:i428'); return false;"><span class="category">Basic properties</span></a></h3></div><div style="display: inline" id="span:i428" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i645" onclick="swap_content('span:i645'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i645" onclick="swap_content('span:i645'); return false;"><b>AFFINE_HULL</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i645" class="foldit"><div class="descr"><p> Dual basis of the affine hull of the polyhedron.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i647" onclick="swap_content('span:i647'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i647" onclick="swap_content('span:i647'); return false;"><b>AMBIENT_DIM</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i647" class="foldit"><div class="descr"><p> Dimension of the space in which the point configuration lives.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i654" onclick="swap_content('span:i654'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i654" onclick="swap_content('span:i654'); return false;"><b>BARYCENTER</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i654" class="foldit"><div class="descr"><p> The center of gravity of the point configuration.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i649" onclick="swap_content('span:i649'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i649" onclick="swap_content('span:i649'); return false;"><b>BOUNDED</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i649" class="foldit"><div class="descr"><p> True if the point configuration is a bounded polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i652" onclick="swap_content('span:i652'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i652" onclick="swap_content('span:i652'); return false;"><b>CONVEX</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i652" class="foldit"><div class="descr"><p> True if the <a href="#i646" onclick="unfold('span:i646');">POINTS</a> are in convex position.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i644" onclick="swap_content('span:i644'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i644" onclick="swap_content('span:i644'); return false;"><b>CONVEX_HULL</b>:
		</a><a href="#i38" onclick="unfold('span:i38');">Polytope&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i644" class="foldit"><div class="descr"><p> The polytope being the convex hull of the point configuration.</p></div><h4>Properties of CONVEX_HULL</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i702" onclick="swap_content('span:i702'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i702" onclick="swap_content('span:i702'); return false;"><b>VERTEX_POINT_MAP</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i702" class="foldit"><div class="descr"><p> Indices of <a href="#i555" onclick="unfold('span:i555');">Polytope::VERTICES</a> of the <a href="#i644" onclick="unfold('span:i644');">CONVEX_HULL</a> as <a href="#i550" onclick="unfold('span:i550');">POINTS</a>.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i651" onclick="swap_content('span:i651'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i651" onclick="swap_content('span:i651'); return false;"><b>DIM</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i651" class="foldit"><div class="descr"><p> Dimension of the affine hull of the point configuration.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i653" onclick="swap_content('span:i653'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i653" onclick="swap_content('span:i653'); return false;"><b>LABELS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a><br/><div style="display: inline" id="span:i653" class="foldit"><div class="descr"><p> Unique names assigned to the <a href="#i646" onclick="unfold('span:i646');">POINTS</a>.
 If specified, they are shown by visualization tools instead of point indices.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i650" onclick="swap_content('span:i650'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i650" onclick="swap_content('span:i650'); return false;"><b>NON_VERTICES</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i650" class="foldit"><div class="descr"><p> <a href="#i646" onclick="unfold('span:i646');">POINTS</a> that are not <a href="#i555" onclick="unfold('span:i555');">Polytope::VERTICES</a> of the <a href="#i644" onclick="unfold('span:i644');">CONVEX_HULL</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i648" onclick="swap_content('span:i648'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i648" onclick="swap_content('span:i648'); return false;"><b>N_POINTS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i648" class="foldit"><div class="descr"><p> Number of <a href="#i646" onclick="unfold('span:i646');">POINTS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i646" onclick="swap_content('span:i646'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i646" onclick="swap_content('span:i646'); return false;"><b>POINTS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i646" class="foldit"><div class="descr"><p> The Points of the configuration</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i655" onclick="swap_content('span:i655'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i655" onclick="swap_content('span:i655'); return false;"><b>VERTEX_POINT_MAP</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i655" class="foldit"><div class="descr"><p> Indices of <a href="#i555" onclick="unfold('span:i555');">Polytope::VERTICES</a> of the <a href="#i644" onclick="unfold('span:i644');">CONVEX_HULL</a> as <a href="#i646" onclick="unfold('span:i646');">POINTS</a></p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i429" onclick="swap_content('span:i429'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i429" onclick="swap_content('span:i429'); return false;"><span class="category">Combinatorics</span></a></h3></div><div style="display: inline" id="span:i429" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i656" onclick="swap_content('span:i656'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i656" onclick="swap_content('span:i656'); return false;"><b>GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i656" class="foldit"><div class="descr"><p> Graph of the point configuration.
 Two points are adjacent if they lie in a common edge of the <a href="#i644" onclick="unfold('span:i644');">CONVEX_HULL</a>.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i431" onclick="swap_content('span:i431'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i431" onclick="swap_content('span:i431'); return false;"><span class="category">Oriented matroids</span></a></h3></div><div style="display: inline" id="span:i431" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i660" onclick="swap_content('span:i660'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i660" onclick="swap_content('span:i660'); return false;"><b>CHIROTOPE</b>:
		</a><a href="common.html#i18" onclick="unfold('span:i18');">common::Text</a><br/><div style="display: inline" id="span:i660" class="foldit"><div class="descr"><p> Chirotope corresponding to <a href="#i646" onclick="unfold('span:i646');">POINTS</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i659" onclick="swap_content('span:i659'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i659" onclick="swap_content('span:i659'); return false;"><b>CIRCUITS</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Pair&lt;Set&lt;Int&gt;, Set&lt;Int&gt;&gt;&gt;</a><br/><div style="display: inline" id="span:i659" class="foldit"><div class="descr"><p> Circuits in <a href="#i646" onclick="unfold('span:i646');">POINTS</a></p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i430" onclick="swap_content('span:i430'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i430" onclick="swap_content('span:i430'); return false;"><span class="category">Triangulation and volume</span></a></h3></div><div style="display: inline" id="span:i430" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i658" onclick="swap_content('span:i658'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i658" onclick="swap_content('span:i658'); return false;"><b>POLYTOPAL_SUBDIVISION</b>:
		</a><a href="fan.html#i9" onclick="unfold('span:i9');">fan::PolyhedralComplex&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i658" class="foldit"><div class="descr"><p>Polytopal Subdivision of the point configuration</p></div><h4>Properties of POLYTOPAL_SUBDIVISION</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i708" onclick="swap_content('span:i708'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i708" onclick="swap_content('span:i708'); return false;"><b>REFINED_SPLITS</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i708" class="foldit"><div class="descr"><p> The splits that are coarsenings of the subdivision.
 If the subdivision is regular these form the unique split decomposition of
 the corresponding weight function.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i707" onclick="swap_content('span:i707'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i707" onclick="swap_content('span:i707'); return false;"><b>WEIGHTS</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i707" class="foldit"><div class="descr"><p> Vector assigning a weight to each point to get a regular subdivision.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i657" onclick="swap_content('span:i657'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i657" onclick="swap_content('span:i657'); return false;"><b>TRIANGULATION</b>:
		</a><a href="topaz.html#i17" onclick="unfold('span:i17');">topaz::SimplicialComplex</a><br/><div style="display: inline" id="span:i657" class="foldit"><div class="descr"><p> Some triangulation of the point configuration.</p></div><h4>Properties of TRIANGULATION</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i704" onclick="swap_content('span:i704'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i704" onclick="swap_content('span:i704'); return false;"><b>GKZ_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i704" class="foldit"><div class="descr"><p> GKZ-vector
</p><blockquote><div>See Chapter 7 in Gelfand, Kapranov, and Zelevinsky:</div><div>Discriminants, Resultants and Multidimensional Determinants, Birkhäuser 1994</div></blockquote></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i706" onclick="swap_content('span:i706'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i706" onclick="swap_content('span:i706'); return false;"><b>REFINED_SPLITS</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i706" class="foldit"><div class="descr"><p> The splits that are coarsenings of the current <a href="#i657" onclick="unfold('span:i657');">TRIANGULATION</a>.
 If the triangulation is regular these form the unique split decomposition of
 the corresponding weight function.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i703" onclick="swap_content('span:i703'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i703" onclick="swap_content('span:i703'); return false;"><b>WEIGHTS</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i703" class="foldit"><div class="descr"><p> Weight vector to construct a regular <a href="#i657" onclick="unfold('span:i657');">TRIANGULATION</a>.
 Must be generic.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i705" onclick="swap_content('span:i705'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i705" onclick="swap_content('span:i705'); return false;"><span class="category">Basic properties</span></a></h3></div><div style="display: inline" id="span:i705" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i711" onclick="swap_content('span:i711'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i711" onclick="swap_content('span:i711'); return false;"><b>BOUNDARY</b>:
		</a><a href="topaz.html#i17" onclick="unfold('span:i17');">topaz::SimplicialComplex</a><br/><div style="display: inline" id="span:i711" class="foldit"><div class="descr"><p> Specialization of <a href="topaz.html#i163" onclick="unfold('span:i163');">topaz::SimplicialComplex::BOUNDARY</a> for PointConfiguration::TRIANGULATION</p></div><h4>Properties of BOUNDARY</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i720" onclick="swap_content('span:i720'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i720" onclick="swap_content('span:i720'); return false;"><b>FACET_TRIANGULATIONS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Set&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i720" class="foldit"><div class="descr"><p> DOC_FIXME: Incomprehensible description!
 For each facet the set of simplex indices of BOUNDARY that triangulate it.</p></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i425" onclick="swap_content('span:i425'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i425" onclick="swap_content('span:i425'); return false;"><span class="category">Unbounded polyhedra</span></a></h3></div><div style="display: inline" id="span:i425" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i642" onclick="swap_content('span:i642'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i642" onclick="swap_content('span:i642'); return false;"><b>FAR_POINTS</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i642" class="foldit"><div class="descr"><p> Indices of <a href="#i646" onclick="unfold('span:i646');">POINTS</a> that are rays.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i427" onclick="swap_content('span:i427'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i427" onclick="swap_content('span:i427'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i427" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i643" onclick="swap_content('span:i643'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i643" onclick="swap_content('span:i643'); return false;"><b>PIF_CYCLIC_NORMAL</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Array&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i643" class="foldit"><div class="descr"><p> <a href="#i543" onclick="unfold('span:i543');">Polytope::VIF_CYCLIC_NORMAL</a> of the <a href="#i644" onclick="unfold('span:i644');">CONVEX_HULL</a>, but with
 the indices form <a href="#i646" onclick="unfold('span:i646');">POINTS</a> instead of <a href="#i555" onclick="unfold('span:i555');">Polytope::VERTICES</a></p></div></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of PointConfiguration</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i422" onclick="swap_content('span:i422'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i422" onclick="swap_content('span:i422'); return false;"><b>VISUAL</b></a>
			()  

			<div style="display: inline" id="span:i422" class="foldit"><br/><div class="descr_func"><div class="undoc"><p>UNDOCUMENTED</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i424" onclick="swap_content('span:i424'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i424" onclick="swap_content('span:i424'); return false;"><span class="category">Triangulation and volume</span></a></h3></div><div style="display: inline" id="span:i424" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i641" onclick="swap_content('span:i641'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i641" onclick="swap_content('span:i641'); return false;"><b>TRIANGULATION_SIGNS</b></a>
			()  

			
				→ Array&lt;int&gt;<div style="display: inline" id="span:i641" class="foldit"><br/><div class="descr_func"><div class="descr"><p> For each simplex in the <a href="#i657" onclick="unfold('span:i657');">TRIANGULATION</a>, this contains the sign of the determinant of its coordinate matrix, 
 which is the orientation of the simplex.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;int&gt;</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i423" onclick="swap_content('span:i423'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i423" onclick="swap_content('span:i423'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i423" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i639" onclick="swap_content('span:i639'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i639" onclick="swap_content('span:i639'); return false;"><b>VISUAL</b></a>
			()  

			
				→ Visual::PointConfiguration<div style="display: inline" id="span:i639" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize a point configuration.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i261" onclick="unfold('span:i261');">Visual::PointConfiguration</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i640" onclick="swap_content('span:i640'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i640" onclick="swap_content('span:i640'); return false;"><b>VISUAL_POINTS</b></a>
			()  

			
				→ Visual::PointSet<div style="display: inline" id="span:i640" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i646" onclick="unfold('span:i646');">POINTS</a> of a point configuration.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::PointSet</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i38" onclick="swap_content('span:i38'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i38" onclick="swap_content('span:i38'); return false;"><span class="object">Polytope</span></a></h3></div><div style="display: inline" id="span:i38" class="foldit"><div class="descr"><p> Not necessarily bounded or unbounded polyhedron.
 Nonetheless, the name "Polytope" is used for two reasons:
 Firstly, combinatorially we always deal with polytopes; see the description of <a href="#i581" onclick="unfold('span:i581');">VERTICES_IN_FACETS</a> for details.
 The second reason is historical.
 We use homogeneous coordinates, which is why Polytope is derived from <a href="#i34" onclick="unfold('span:i34');">Cone</a>.
 Note that a pointed polyhedron is projectively equivalent to a polytope.
 <em class="param">Scalar</em> is the numeric data type used for the coordinates.</p></div><b>derived from: </b><a href="#i34" onclick="unfold('span:i34');">Cone</a><br/><div class="level3"/><h4>Properties of Polytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i381" onclick="swap_content('span:i381'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i381" onclick="swap_content('span:i381'); return false;"><b>CENTROID</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i381" class="foldit"><div class="descr"><p> Centroid (center of mass) of the polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i380" onclick="swap_content('span:i380'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i380" onclick="swap_content('span:i380'); return false;"><b>SPLITS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i380" class="foldit"><div class="descr"><p> The splits of the polytope, i.e., hyperplanes cutting the polytope in
 two parts such that we have a regular subdivision.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i372" onclick="swap_content('span:i372'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i372" onclick="swap_content('span:i372'); return false;"><b>SPLIT_COMPATIBILITY_GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i372" class="foldit"><div class="descr"><p> Two <a href="#i380" onclick="unfold('span:i380');">SPLITS</a> are compatible if the defining hyperplanes do not intersect in the
 interior of the polytope.  This defines a graph.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i370" onclick="swap_content('span:i370'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i370" onclick="swap_content('span:i370'); return false;"><b>STEINER_POINT</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i370" class="foldit"><div class="descr"><p> Steiner point of the whole polytope</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i375" onclick="swap_content('span:i375'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i375" onclick="swap_content('span:i375'); return false;"><span class="category">Basic properties</span></a></h3></div><div style="display: inline" id="span:i375" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i549" onclick="swap_content('span:i549'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i549" onclick="swap_content('span:i549'); return false;"><b>AFFINE_HULL</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i549" class="foldit"><div class="descr"><p> Dual basis of the affine hull of the polyhedron. 
 Alias for property <a href="#i467" onclick="unfold('span:i467');">LINEAR_SPAN</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i557" onclick="swap_content('span:i557'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i557" onclick="swap_content('span:i557'); return false;"><b>BOUNDED</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i557" class="foldit"><div class="descr"><p> True if and only if <a href="#i469" onclick="unfold('span:i469');">LINEALITY_SPACE</a> trivial and <a href="#i533" onclick="unfold('span:i533');">FAR_FACE</a> is trivial.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i561" onclick="swap_content('span:i561'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i561" onclick="swap_content('span:i561'); return false;"><b>CENTERED</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i561" class="foldit"><div class="descr"><p> True if (1, 0, 0, ...) is in the relative interior.
 If full-dimensional then polar to <a href="#i557" onclick="unfold('span:i557');">BOUNDED</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i559" onclick="swap_content('span:i559'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i559" onclick="swap_content('span:i559'); return false;"><b>FEASIBLE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i559" class="foldit"><div class="descr"><p> True if the polyhedron is not empty.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i553" onclick="swap_content('span:i553'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i553" onclick="swap_content('span:i553'); return false;"><b>GALE_TRANSFORM</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i553" class="foldit"><div class="descr"><p> Coordinates of the Gale transform.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i551" onclick="swap_content('span:i551'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i551" onclick="swap_content('span:i551'); return false;"><b>MINIMAL_VERTEX_ANGLE</b>:
		</a><a href="common.html#i53" onclick="unfold('span:i53');">common::Float</a><br/><div style="display: inline" id="span:i551" class="foldit"><div class="descr"><p> The minimal angle between any two vertices (seen from the <a href="#i560" onclick="unfold('span:i560');">VERTEX_BARYCENTER</a>).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i552" onclick="swap_content('span:i552'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i552" onclick="swap_content('span:i552'); return false;"><b>N_POINTS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i552" class="foldit"><div class="descr"><p> Number of <a href="#i550" onclick="unfold('span:i550');">POINTS</a>.
 Alias for property <a href="#i507" onclick="unfold('span:i507');">N_INPUT_RAYS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i556" onclick="swap_content('span:i556'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i556" onclick="swap_content('span:i556'); return false;"><b>ONE_VERTEX</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i556" class="foldit"><div class="descr"><p> A vertex of a pointed polyhedron.
 Alias for property <a href="#i502" onclick="unfold('span:i502');">ONE_RAY</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i550" onclick="swap_content('span:i550'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i550" onclick="swap_content('span:i550'); return false;"><b>POINTS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i550" class="foldit"><div class="descr"><p> Points such that the polyhedron is their convex hull.
 Redundancies are allowed.
 The vector (x<sub>0</sub>, x<sub>1</sub>, ... x<sub>d</sub>) represents a point in d-space given in homogeneous coordinates.
 Affine points are identified by x<sub>0</sub> &gt; 0.
 Points with x<sub>0</sub> = 0 can be interpreted as rays.</p><p> polymake automatically normalizes each coordinate vector, dividing them by the first non-zero element.
 The clients and rule subroutines can always assume that x<sub>0</sub> is either 0 or 1.
 Dual to <a href="#i465" onclick="unfold('span:i465');">INEQUALITIES</a>.</p><p> Input section only.  Ask for <a href="#i555" onclick="unfold('span:i555');">VERTICES</a> if you want to compute a V-representation from an H-representation.
 Alias for property <a href="#i503" onclick="unfold('span:i503');">INPUT_RAYS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i562" onclick="swap_content('span:i562'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i562" onclick="swap_content('span:i562'); return false;"><b>STEINER_POINTS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i562" class="foldit"><div class="descr"><p> A weighted inner point depending on the outer angle called Steiner point for all faces of dimensions 2 to d.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i548" onclick="swap_content('span:i548'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i548" onclick="swap_content('span:i548'); return false;"><b>VALID_POINT</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i548" class="foldit"><div class="descr"><p> Some point belonging to the polyhedron.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i560" onclick="swap_content('span:i560'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i560" onclick="swap_content('span:i560'); return false;"><b>VERTEX_BARYCENTER</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i560" class="foldit"><div class="descr"><p> The center of gravity of the vertices of a bounded polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i558" onclick="swap_content('span:i558'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i558" onclick="swap_content('span:i558'); return false;"><b>VERTEX_LABELS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a><br/><div style="display: inline" id="span:i558" class="foldit"><div class="descr"><p> Unique names assigned to the <a href="#i555" onclick="unfold('span:i555');">VERTICES</a>.
 If specified, they are shown by visualization tools instead of vertex indices.</p><p> For a polytope build from scratch, you should create this property by yourself,
 either manually in a text editor, or with a client program.</p><p> If you build a polytope with a construction function
 taking some other input polytope(s), you can create the labels automatically if you
 call the function with a <em class="param">relabel</em> option. The exact format of the labels is dependent on the
 construction, and is described in the corresponding help topic.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i547" onclick="swap_content('span:i547'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i547" onclick="swap_content('span:i547'); return false;"><b>VERTEX_NORMALS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i547" class="foldit"><div class="descr"><p> The i-th row is the normal vector of a hyperplane separating the i-th vertex from the others.
 This property is a by-product of redundant point elimination algorithm.
 Alias for property <a href="#i458" onclick="unfold('span:i458');">RAY_SEPARATORS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i555" onclick="swap_content('span:i555'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i555" onclick="swap_content('span:i555'); return false;"><b>VERTICES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i555" class="foldit"><div class="descr"><p> Vertices of the polyhedron. No redundancies are allowed.
 The coordinates are normalized the same way as <a href="#i550" onclick="unfold('span:i550');">POINTS</a>. Dual to <a href="#i466" onclick="unfold('span:i466');">FACETS</a>.
 This section is empty if and only if the polytope is empty. 
 Alias for property <a href="#i501" onclick="unfold('span:i501');">RAYS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i554" onclick="swap_content('span:i554'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i554" onclick="swap_content('span:i554'); return false;"><b>ZONOTOPE_INPUT_VECTORS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i554" class="foldit"><div class="descr"><p> DOC_FIXME: Incomprehensible!
 Contains the vector configuration for which a <a href="#i101" onclick="unfold('span:i101');">zonotope</a> can be built.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i376" onclick="swap_content('span:i376'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i376" onclick="swap_content('span:i376'); return false;"><span class="category">Combinatorics</span></a></h3></div><div style="display: inline" id="span:i376" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i592" onclick="swap_content('span:i592'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i592" onclick="swap_content('span:i592'); return false;"><b>ALTSHULER_DET</b>:
		</a><a href="common.html#i33" onclick="unfold('span:i33');">common::Integer</a><br/><div style="display: inline" id="span:i592" class="foldit"><div class="descr"><p> Let M be the vertex-facet incidence matrix, then the Altshulter determinant is
 defined as max{det(M ∗ M<sup>T</sup>), det(M<sup>T</sup> ∗ M)}.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i567" onclick="swap_content('span:i567'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i567" onclick="swap_content('span:i567'); return false;"><b>BALANCE</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i567" class="foldit"><div class="descr"><p> Maximal dimension in which all facets are balanced.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i585" onclick="swap_content('span:i585'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i585" onclick="swap_content('span:i585'); return false;"><b>BALANCED</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i585" class="foldit"><div class="descr"><p> Dual to <a href="#i568" onclick="unfold('span:i568');">NEIGHBORLY</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i563" onclick="swap_content('span:i563'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i563" onclick="swap_content('span:i563'); return false;"><b>CD_INDEX_COEFFICIENTS</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i563" class="foldit"><div class="descr"><p> Coefficients of the cd-index.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i565" onclick="swap_content('span:i565'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i565" onclick="swap_content('span:i565'); return false;"><b>COCUBICAL</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i565" class="foldit"><div class="descr"><p> Dual to <a href="#i570" onclick="unfold('span:i570');">CUBICAL</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i572" onclick="swap_content('span:i572'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i572" onclick="swap_content('span:i572'); return false;"><b>COCUBICALITY</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i572" class="foldit"><div class="descr"><p> Dual to <a href="#i573" onclick="unfold('span:i573');">CUBICALITY</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i571" onclick="swap_content('span:i571'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i571" onclick="swap_content('span:i571'); return false;"><b>COMPLEXITY</b>:
		</a><a href="common.html#i53" onclick="unfold('span:i53');">common::Float</a><br/><div style="display: inline" id="span:i571" class="foldit"><div class="descr"><p> Parameter describing the shape of the face-lattice of a 4-polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i570" onclick="swap_content('span:i570'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i570" onclick="swap_content('span:i570'); return false;"><b>CUBICAL</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i570" class="foldit"><div class="descr"><p> True if all facets are cubes.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i573" onclick="swap_content('span:i573'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i573" onclick="swap_content('span:i573'); return false;"><b>CUBICALITY</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i573" class="foldit"><div class="descr"><p> Maximal dimension in which all facets are cubes.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i591" onclick="swap_content('span:i591'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i591" onclick="swap_content('span:i591'); return false;"><b>CUBICAL_H_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i591" class="foldit"><div class="descr"><p> Cubical h-vector. Defined for cubical polytopes.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i586" onclick="swap_content('span:i586'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i586" onclick="swap_content('span:i586'); return false;"><b>DUAL_BOUNDED_H_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i586" class="foldit"><div class="descr"><p> h-vector of the bounded subcomplex, defined for not necessarily bounded polyhedra
 which are simple (as polyhedra, i.e., <a href="#i443" onclick="unfold('span:i443');">VERTEX_DEGREES</a> on the <a href="#i533" onclick="unfold('span:i533');">FAR_FACE</a> do not matter).
 Coincides with the reverse h-vector of the dual simplicial ball.
 Note that this vector will usually start with a number of zero entries.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i564" onclick="swap_content('span:i564'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i564" onclick="swap_content('span:i564'); return false;"><b>DUAL_H_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i564" class="foldit"><div class="descr"><p> dual h-vector, defined via recursion on the face lattice of a polytope.
 Coincides for simple polytopes with the combinatorial definition
 of the h-vector via abstract objective functions.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i577" onclick="swap_content('span:i577'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i577" onclick="swap_content('span:i577'); return false;"><b>F2_VECTOR</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Integer, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i577" class="foldit"><div class="descr"><p> f<sub>ik</sub> is the number of incident pairs of i-faces and k-faces; the main diagonal contains the <a href="#i593" onclick="unfold('span:i593');">F_VECTOR</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i566" onclick="swap_content('span:i566'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i566" onclick="swap_content('span:i566'); return false;"><b>FACETS_THRU_POINTS</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i566" class="foldit"><div class="descr"><p> similar to <a href="#i576" onclick="unfold('span:i576');">FACETS_THRU_VERTICES</a>, but with <a href="#i550" onclick="unfold('span:i550');">POINTS</a> instead of <a href="#i555" onclick="unfold('span:i555');">VERTICES</a>
 Notice that this is a temporary property; it will not be stored in any file.
 Alias for property <a href="#i478" onclick="unfold('span:i478');">FACETS_THRU_INPUT_RAYS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i576" onclick="swap_content('span:i576'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i576" onclick="swap_content('span:i576'); return false;"><b>FACETS_THRU_VERTICES</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i576" class="foldit"><div class="descr"><p> transposed <a href="#i581" onclick="unfold('span:i581');">VERTICES_IN_FACETS</a>
 Notice that this is a temporary property; it will not be stored in any file.
 Alias for property <a href="#i482" onclick="unfold('span:i482');">FACETS_THRU_RAYS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i579" onclick="swap_content('span:i579'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i579" onclick="swap_content('span:i579'); return false;"><b>FACE_SIMPLICITY</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i579" class="foldit"><div class="descr"><p> Maximal dimension in which all faces are simple polytopes.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i583" onclick="swap_content('span:i583'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i583" onclick="swap_content('span:i583'); return false;"><b>FATNESS</b>:
		</a><a href="common.html#i53" onclick="unfold('span:i53');">common::Float</a><br/><div style="display: inline" id="span:i583" class="foldit"><div class="descr"><p> Parameter describing the shape of the face-lattice of a 4-polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i593" onclick="swap_content('span:i593'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i593" onclick="swap_content('span:i593'); return false;"><b>F_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i593" class="foldit"><div class="descr"><p> f<sub>k</sub> is the number of k-faces.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i588" onclick="swap_content('span:i588'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i588" onclick="swap_content('span:i588'); return false;"><b>GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i588" class="foldit"><div class="descr"><p> Specialization of <a href="#i490" onclick="unfold('span:i490');">Cone::GRAPH</a> for Polytope</p></div><h4>Properties of GRAPH</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i699" onclick="swap_content('span:i699'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i699" onclick="swap_content('span:i699'); return false;"><b>EDGE_DIRECTIONS</b>:
		</a><a href="common.html#i25" onclick="unfold('span:i25');">common::EdgeMap&lt;Undirected, Vector&lt;Scalar&gt;&gt;</a><br/><div style="display: inline" id="span:i699" class="foldit"><div class="descr"><p> Difference of the vertices for each edge (only defined up to signs).</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i582" onclick="swap_content('span:i582'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i582" onclick="swap_content('span:i582'); return false;"><b>G_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i582" class="foldit"><div class="descr"><p> (Toric) g-vector, defined via the (generalized) h-vector as g<sub>i</sub> = h<sub>i</sub> - h<sub>i-1</sub>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i575" onclick="swap_content('span:i575'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i575" onclick="swap_content('span:i575'); return false;"><b>H_VECTOR</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Integer&gt;</a><br/><div style="display: inline" id="span:i575" class="foldit"><div class="descr"><p> h-vector, defined via recursion on the face lattice of a polytope.
 Coincides for simplicial polytopes with the combinatorial definition
 of the h-vector via shellings</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i569" onclick="swap_content('span:i569'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i569" onclick="swap_content('span:i569'); return false;"><b>NEIGHBORLINESS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i569" class="foldit"><div class="descr"><p> Maximal dimension in which all facets are neighborly.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i568" onclick="swap_content('span:i568'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i568" onclick="swap_content('span:i568'); return false;"><b>NEIGHBORLY</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i568" class="foldit"><div class="descr"><p> True if the polytope is neighborly.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i580" onclick="swap_content('span:i580'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i580" onclick="swap_content('span:i580'); return false;"><b>N_VERTEX_FACET_INC</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i580" class="foldit"><div class="descr"><p> Number of pairs of incident vertices and facets.
 Alias for property <a href="#i480" onclick="unfold('span:i480');">N_RAY_FACET_INC</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i574" onclick="swap_content('span:i574'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i574" onclick="swap_content('span:i574'); return false;"><b>N_VERTICES</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i574" class="foldit"><div class="descr"><p> Number of <a href="#i555" onclick="unfold('span:i555');">VERTICES</a>.
 Alias for property <a href="#i462" onclick="unfold('span:i462');">N_RAYS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i590" onclick="swap_content('span:i590'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i590" onclick="swap_content('span:i590'); return false;"><b>SIMPLICIALITY</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i590" class="foldit"><div class="descr"><p> Maximal dimension in which all faces are simplices.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i589" onclick="swap_content('span:i589'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i589" onclick="swap_content('span:i589'); return false;"><b>SIMPLICITY</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i589" class="foldit"><div class="descr"><p> Maximal dimension in which all dual faces are simplices.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i584" onclick="swap_content('span:i584'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i584" onclick="swap_content('span:i584'); return false;"><b>SUBRIDGE_SIZES</b>:
		</a><a href="common.html#i48" onclick="unfold('span:i48');">common::Map&lt;Int, Int&gt;</a><br/><div style="display: inline" id="span:i584" class="foldit"><div class="descr"><p> Lists for each occurring size (= number of incident facets or ridges) of a subridge how many there are.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i587" onclick="swap_content('span:i587'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i587" onclick="swap_content('span:i587'); return false;"><b>TWO_FACE_SIZES</b>:
		</a><a href="common.html#i48" onclick="unfold('span:i48');">common::Map&lt;Int, Int&gt;</a><br/><div style="display: inline" id="span:i587" class="foldit"><div class="descr"><p> Lists for each occurring size (= number of incident vertices or edges) of a 2-face how many there are.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i578" onclick="swap_content('span:i578'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i578" onclick="swap_content('span:i578'); return false;"><b>VERTEX_SIZES</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i578" class="foldit"><div class="descr"><p> Number of incident facets for each vertex.
 Alias for property <a href="#i494" onclick="unfold('span:i494');">RAY_SIZES</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i581" onclick="swap_content('span:i581'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i581" onclick="swap_content('span:i581'); return false;"><b>VERTICES_IN_FACETS</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i581" class="foldit"><div class="descr"><p> Vertex-facet incidence matrix, with rows corresponding to facets and columns
 to vertices. Vertices and facets are numbered from 0 to <a href="#i574" onclick="unfold('span:i574');">N_VERTICES</a>-1 rsp.
 <a href="#i471" onclick="unfold('span:i471');">N_FACETS</a>-1, according to their order in <a href="#i555" onclick="unfold('span:i555');">VERTICES</a> rsp. <a href="#i466" onclick="unfold('span:i466');">FACETS</a>.</p><p> This property is at the core of all combinatorial properties.  It has the following semantics:
 (1) The combinatorics of an unbounded and pointed polyhedron is defined to be the combinatorics
     of the projective closure.
 (2) The combiantorics of an unbounded polyhedron which is not pointed is defined to be the
     combinatorics of the quotient modulo the lineality space.
 Therefore: <a href="#i581" onclick="unfold('span:i581');">VERTICES_IN_FACETS</a> and each other property which is grouped under "Combinatorics"
 always refers to some polytope.
 Alias for property <a href="#i475" onclick="unfold('span:i475');">RAYS_IN_FACETS</a>.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i373" onclick="swap_content('span:i373'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i373" onclick="swap_content('span:i373'); return false;"><span class="category">Convex hull computation</span></a></h3></div><div style="display: inline" id="span:i373" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i540" onclick="swap_content('span:i540'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i540" onclick="swap_content('span:i540'); return false;"><b>INEQUALITIES_THRU_VERTICES</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i540" class="foldit"><div class="descr"><p> transposed <a href="#i541" onclick="unfold('span:i541');">VERTICES_IN_INEQUALITIES</a>
 Alias for property <a href="#i491" onclick="unfold('span:i491');">INEQUALITIES_THRU_RAYS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i539" onclick="swap_content('span:i539'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i539" onclick="swap_content('span:i539'); return false;"><b>POINTS_IN_FACETS</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i539" class="foldit"><div class="descr"><p> Similar to <a href="#i581" onclick="unfold('span:i581');">VERTICES_IN_FACETS</a>, but with columns corresponding to <a href="#i550" onclick="unfold('span:i550');">POINTS</a> instead of <a href="#i555" onclick="unfold('span:i555');">VERTICES</a>.
 This property is a byproduct of convex hull computation algorithms.
 It is discarded as soon as <a href="#i581" onclick="unfold('span:i581');">VERTICES_IN_FACETS</a> is computed.
 Alias for property <a href="#i489" onclick="unfold('span:i489');">INPUT_RAYS_IN_FACETS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i541" onclick="swap_content('span:i541'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i541" onclick="swap_content('span:i541'); return false;"><b>VERTICES_IN_INEQUALITIES</b>:
		</a><a href="common.html#i27" onclick="unfold('span:i27');">common::IncidenceMatrix&lt;NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i541" class="foldit"><div class="descr"><p> Similar to <a href="#i581" onclick="unfold('span:i581');">VERTICES_IN_FACETS</a>, but with rows corresponding to <a href="#i465" onclick="unfold('span:i465');">INEQUALITIES</a> instead of <a href="#i466" onclick="unfold('span:i466');">FACETS</a>.
 This property is a byproduct of convex hull computation algorithms.
 It is discarded as soon as <a href="#i581" onclick="unfold('span:i581');">VERTICES_IN_FACETS</a> is computed.
 Alias for property <a href="#i493" onclick="unfold('span:i493');">RAYS_IN_INEQUALITIES</a>.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i368" onclick="swap_content('span:i368'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i368" onclick="swap_content('span:i368'); return false;"><span class="category">Optimization</span></a></h3></div><div style="display: inline" id="span:i368" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i531" onclick="swap_content('span:i531'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i531" onclick="swap_content('span:i531'); return false;"><b>LP</b>:
		</a><a href="#i266" onclick="unfold('span:i266');">LinearProgram&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i531" class="foldit"><div class="descr"><p> Linear program applied to the polytope</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i378" onclick="swap_content('span:i378'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i378" onclick="swap_content('span:i378'); return false;"><span class="category">Oriented matroids</span></a></h3></div><div style="display: inline" id="span:i378" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i596" onclick="swap_content('span:i596'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i596" onclick="swap_content('span:i596'); return false;"><b>CHIROTOPE</b>:
		</a><a href="common.html#i18" onclick="unfold('span:i18');">common::Text</a><br/><div style="display: inline" id="span:i596" class="foldit"><div class="descr"><p> Chirotope corresponding to the <a href="#i555" onclick="unfold('span:i555');">VERTICES</a></p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i369" onclick="swap_content('span:i369'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i369" onclick="swap_content('span:i369'); return false;"><span class="category">Polarization</span></a></h3></div><div style="display: inline" id="span:i369" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i532" onclick="swap_content('span:i532'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i532" onclick="swap_content('span:i532'); return false;"><b>FAR_HYPERPLANE</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i532" class="foldit"><div class="descr"><p> Valid strict inequality for all affine points of the polyhedron.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i379" onclick="swap_content('span:i379'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i379" onclick="swap_content('span:i379'); return false;"><span class="category">Special properties</span></a></h3></div><div style="display: inline" id="span:i379" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i597" onclick="swap_content('span:i597'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i597" onclick="swap_content('span:i597'); return false;"><b>SPECIAL_FACETS</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i597" class="foldit"><div class="descr"><p> The following is defined for <em class="param">CENTERED</em> polytopes only:
 A facet is special if the cone over that facet with the origin as the apex contains the <em class="param">VERTEX_BARYCENTER</em>.
 Motivated by Obro's work on Fano polytopes.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i377" onclick="swap_content('span:i377'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i377" onclick="swap_content('span:i377'); return false;"><span class="category">Triangulation and volume</span></a></h3></div><div style="display: inline" id="span:i377" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i595" onclick="swap_content('span:i595'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i595" onclick="swap_content('span:i595'); return false;"><b>POLYTOPAL_SUBDIVISION</b>:
		</a><a href="fan.html#i9" onclick="unfold('span:i9');">fan::PolyhedralComplex&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i595" class="foldit"><div class="descr"><p> Polytopal Subdivision of the polytope using only its vertices.</p></div><h4>Properties of POLYTOPAL_SUBDIVISION</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i701" onclick="swap_content('span:i701'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i701" onclick="swap_content('span:i701'); return false;"><b>REFINED_SPLITS</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i701" class="foldit"><div class="descr"><p> The splits that are coarsenings of the subdivision.
 If the subdivision is regular these form the unique split decomposition of
 the corresponding weight function.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i700" onclick="swap_content('span:i700'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i700" onclick="swap_content('span:i700'); return false;"><b>WEIGHTS</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i700" class="foldit"><div class="descr"><p> Vector assigning a weight to each vertex to get a regular subdivision.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i594" onclick="swap_content('span:i594'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i594" onclick="swap_content('span:i594'); return false;"><b>VOLUME</b>:
		</a>Scalar<br/><div style="display: inline" id="span:i594" class="foldit"><div class="descr"><p> Volume of the polytope.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i371" onclick="swap_content('span:i371'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i371" onclick="swap_content('span:i371'); return false;"><span class="category">Unbounded polyhedra</span></a></h3></div><div style="display: inline" id="span:i371" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i536" onclick="swap_content('span:i536'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i536" onclick="swap_content('span:i536'); return false;"><b>BOUNDED_COMPLEX</b>:
		</a><a href="fan.html#i9" onclick="unfold('span:i9');">fan::PolyhedralComplex&lt;Rational&gt;</a><br/><div style="display: inline" id="span:i536" class="foldit"><div class="descr"><p> Bounded subcomplex.</p></div><h4>Properties of BOUNDED_COMPLEX</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i698" onclick="swap_content('span:i698'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i698" onclick="swap_content('span:i698'); return false;"><span class="category">Combinatorics</span></a></h3></div><div style="display: inline" id="span:i698" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i710" onclick="swap_content('span:i710'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i710" onclick="swap_content('span:i710'); return false;"><b>GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i710" class="foldit"><div class="descr"><p> Specialization of <a href="fan.html#i83" onclick="unfold('span:i83');">fan::PolyhedralFan::GRAPH</a> for Polytope::BOUNDED_COMPLEX</p></div><h4>Properties of GRAPH</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i717" onclick="swap_content('span:i717'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i717" onclick="swap_content('span:i717'); return false;"><b>EDGE_COLORS</b>:
		</a><a href="common.html#i25" onclick="unfold('span:i25');">common::EdgeMap&lt;Undirected, Int&gt;</a><br/><div style="display: inline" id="span:i717" class="foldit"><div class="descr"><p> Each edge indicates the maximal dimension of a bounded
 face containing it.  Mainly used for visualization purposes.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i719" onclick="swap_content('span:i719'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i719" onclick="swap_content('span:i719'); return false;"><b>EDGE_DIRECTIONS</b>:
		</a><a href="common.html#i25" onclick="unfold('span:i25');">common::EdgeMap&lt;Undirected, Vector&lt;Scalar&gt;&gt;</a><br/><div style="display: inline" id="span:i719" class="foldit"><div class="descr"><p> Difference of the vertices for each edge (only defined up to signs).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i716" onclick="swap_content('span:i716'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i716" onclick="swap_content('span:i716'); return false;"><b>EDGE_LENGTHS</b>:
		</a><a href="common.html#i25" onclick="unfold('span:i25');">common::EdgeMap&lt;Undirected, Scalar&gt;</a><br/><div style="display: inline" id="span:i716" class="foldit"><div class="descr"><p> The length of each edge measured in the maximum metric.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i718" onclick="swap_content('span:i718'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i718" onclick="swap_content('span:i718'); return false;"><b>TOTAL_LENGTH</b>:
		</a>Scalar<br/><div style="display: inline" id="span:i718" class="foldit"><div class="descr"><p> Sum of all <a href="#i716" onclick="unfold('span:i716');">EDGE_LENGTHS</a>.</p></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i533" onclick="swap_content('span:i533'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i533" onclick="swap_content('span:i533'); return false;"><b>FAR_FACE</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i533" class="foldit"><div class="descr"><p> Indices of vertices that are rays.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i534" onclick="swap_content('span:i534'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i534" onclick="swap_content('span:i534'); return false;"><b>N_BOUNDED_VERTICES</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i534" class="foldit"><div class="descr"><p> Number of bounded vertices (non-rays).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i537" onclick="swap_content('span:i537'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i537" onclick="swap_content('span:i537'); return false;"><b>SIMPLE_POLYHEDRON</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i537" class="foldit"><div class="descr"><p> True if each bounded vertex of a (possibly unbounded) d-polyhedron has vertex degree d in the <a href="#i710" onclick="unfold('span:i710');">GRAPH</a>.
 The vertex degrees of the vertices on the <a href="#i533" onclick="unfold('span:i533');">FAR_FACE</a> do not matter.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i538" onclick="swap_content('span:i538'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i538" onclick="swap_content('span:i538'); return false;"><b>TOWARDS_FAR_FACE</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i538" class="foldit"><div class="descr"><p> A linear objective function for which each unbounded edge is increasing;
 only defined for unbounded polyhedra.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i535" onclick="swap_content('span:i535'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i535" onclick="swap_content('span:i535'); return false;"><b>UNBOUNDED_FACETS</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i535" class="foldit"><div class="descr"><p> Indices of facets that are unbounded.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i374" onclick="swap_content('span:i374'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i374" onclick="swap_content('span:i374'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i374" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i542" onclick="swap_content('span:i542'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i542" onclick="swap_content('span:i542'); return false;"><b>FTV_CYCLIC_NORMAL</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;List&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i542" class="foldit"><div class="descr"><p> Reordered transposed <a href="#i581" onclick="unfold('span:i581');">VERTICES_IN_FACETS</a>. Dual to <a href="#i543" onclick="unfold('span:i543');">VIF_CYCLIC_NORMAL</a>.
 Alias for property <a href="#i452" onclick="unfold('span:i452');">FTR_CYCLIC_NORMAL</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i546" onclick="swap_content('span:i546'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i546" onclick="swap_content('span:i546'); return false;"><b>GALE_VERTICES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Float, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i546" class="foldit"><div class="descr"><p> Coordinates of points for an affine Gale diagram.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i544" onclick="swap_content('span:i544'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i544" onclick="swap_content('span:i544'); return false;"><b>NEIGHBOR_VERTICES_CYCLIC_NORMAL</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;List&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i544" class="foldit"><div class="descr"><p> Reordered <a href="#i588" onclick="unfold('span:i588');">GRAPH</a>. Dual to <a href="#i453" onclick="unfold('span:i453');">NEIGHBOR_FACETS_CYCLIC_NORMAL</a>.
 Alias for property <a href="#i455" onclick="unfold('span:i455');">NEIGHBOR_RAYS_CYCLIC_NORMAL</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i545" onclick="swap_content('span:i545'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i545" onclick="swap_content('span:i545'); return false;"><b>SCHLEGEL_DIAGRAM</b>:
		</a><a href="#i35" onclick="unfold('span:i35');">SchlegelDiagram&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i545" class="foldit"><div class="descr"><p> Holds one special projection (the Schlegel diagram) of the polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i543" onclick="swap_content('span:i543'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i543" onclick="swap_content('span:i543'); return false;"><b>VIF_CYCLIC_NORMAL</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Array&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i543" class="foldit"><div class="descr"><p> Reordered <a href="#i581" onclick="unfold('span:i581');">VERTICES_IN_FACETS</a> for 2d and 3d-polytopes.
 Vertices are listed in the order of their appearance
 when traversing the facet border counterclockwise seen from outside of the polytope.</p><p> For a 2d-polytope (which is a closed polygon), lists all vertices in the border traversing order.
 Alias for property <a href="#i454" onclick="unfold('span:i454');">RIF_CYCLIC_NORMAL</a>.</p></div></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of Polytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i358" onclick="swap_content('span:i358'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i358" onclick="swap_content('span:i358'); return false;"><b>AMBIENT_DIM</b></a>
			()  

			<div style="display: inline" id="span:i358" class="foldit"><br/><div class="descr_func"><div class="undoc"><p>UNDOCUMENTED</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i363" onclick="swap_content('span:i363'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i363" onclick="swap_content('span:i363'); return false;"><b>contains</b></a>
			()  

			<div style="display: inline" id="span:i363" class="foldit"><br/><div class="descr_func"><div class="undoc"><p>UNDOCUMENTED</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i360" onclick="swap_content('span:i360'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i360" onclick="swap_content('span:i360'); return false;"><b>contains_in_interior</b></a>
			()  

			<div style="display: inline" id="span:i360" class="foldit"><br/><div class="descr_func"><div class="descr"><p> FIXME the implementation of the following  user_method is *not* efficient, if 
 FIXME the polytope is given via vertices 
 FIXME should be done in the same way as the one above</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i366" onclick="swap_content('span:i366'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i366" onclick="swap_content('span:i366'); return false;"><b>DIM</b></a>
			()  

			<div style="display: inline" id="span:i366" class="foldit"><br/><div class="descr_func"><div class="undoc"><p>UNDOCUMENTED</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i361" onclick="swap_content('span:i361'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i361" onclick="swap_content('span:i361'); return false;"><b>labeled_vertices</b></a>
			(label ...)  

			
				→ Set&lt;Int&gt;<div style="display: inline" id="span:i361" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Find the vertices by given labels.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">label ...</td><td><div class="descr"><div>vertex labels</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td><div class="descr"><div>vertex indices</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i367" onclick="swap_content('span:i367'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i367" onclick="swap_content('span:i367'); return false;"><span class="category">Backward compatibility</span></a></h3></div><div style="display: inline" id="span:i367" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i530" onclick="swap_content('span:i530'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i530" onclick="swap_content('span:i530'); return false;"><b>N_EDGES</b></a>
			()  

			<div style="display: inline" id="span:i530" class="foldit"><br/><div class="descr_func"><div class="descr"><p> The number of edges of the <a href="#i588" onclick="unfold('span:i588');">GRAPH</a></p></div></div><div class="level3"/></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i364" onclick="swap_content('span:i364'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i364" onclick="swap_content('span:i364'); return false;"><span class="category">Combinatorics</span></a></h3></div><div style="display: inline" id="span:i364" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i527" onclick="swap_content('span:i527'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i527" onclick="swap_content('span:i527'); return false;"><b>N_RIDGES</b></a>
			()  

			<div style="display: inline" id="span:i527" class="foldit"><br/><div class="descr_func"><div class="descr"><p> The number of ridges (faces of codimension 2) of the polytope
 equals the number of edges of the <a href="#i479" onclick="unfold('span:i479');">DUAL_GRAPH</a></p></div></div><div class="level3"/></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i359" onclick="swap_content('span:i359'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i359" onclick="swap_content('span:i359'); return false;"><span class="category">Formatting</span></a></h3></div><div style="display: inline" id="span:i359" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i516" onclick="swap_content('span:i516'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i516" onclick="swap_content('span:i516'); return false;"><b>CD_INDEX</b></a>
			()  

			<div style="display: inline" id="span:i516" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Prettily print the cd-index given in <a href="#i563" onclick="unfold('span:i563');">CD_INDEX_COEFFICIENTS</a></p></div></div><div class="level3"/></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i365" onclick="swap_content('span:i365'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i365" onclick="swap_content('span:i365'); return false;"><span class="category">Triangulation and volume</span></a></h3></div><div style="display: inline" id="span:i365" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i529" onclick="swap_content('span:i529'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i529" onclick="swap_content('span:i529'); return false;"><b>TRIANGULATION_INT_SIGNS</b></a>
			()  

			
				→ Array&lt;Int&gt;<div style="display: inline" id="span:i529" class="foldit"><br/><div class="descr_func"><div class="descr"><p> the orientation of the simplices of <a href="#i496" onclick="unfold('span:i496');">TRIANGULATION_INT</a> in the given order of the <a href="#i550" onclick="unfold('span:i550');">POINTS</a></p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Int&gt;</a></td><td><div class="descr"><div>- +1/-1 array specifying the sign of the determinant of each simplex</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i528" onclick="swap_content('span:i528'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i528" onclick="swap_content('span:i528'); return false;"><b>TRIANGULATION_SIGNS</b></a>
			()  

			
				→ Array&lt;Int&gt;<div style="display: inline" id="span:i528" class="foldit"><br/><div class="descr_func"><div class="descr"><p> For each simplex in the <a href="#i497" onclick="unfold('span:i497');">TRIANGULATION</a>, contains the sign of the determinant of its coordinate matrix, telling about its orientation.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Int&gt;</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i357" onclick="swap_content('span:i357'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i357" onclick="swap_content('span:i357'); return false;"><span class="category">Unbounded polyhedra</span></a></h3></div><div style="display: inline" id="span:i357" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i514" onclick="swap_content('span:i514'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i514" onclick="swap_content('span:i514'); return false;"><b>BOUNDED_DUAL_GRAPH</b></a>
			()  

			<div style="display: inline" id="span:i514" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Dual graph of the bounded subcomplex.</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i512" onclick="swap_content('span:i512'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i512" onclick="swap_content('span:i512'); return false;"><b>BOUNDED_FACETS</b></a>
			()  

			
				→ Set&lt;Int&gt;<div style="display: inline" id="span:i512" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Indices of <a href="#i466" onclick="unfold('span:i466');">FACETS</a> that are bounded.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i511" onclick="swap_content('span:i511'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i511" onclick="swap_content('span:i511'); return false;"><b>BOUNDED_GRAPH</b></a>
			()  

			<div style="display: inline" id="span:i511" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Graph of the bounded subcomplex.</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i513" onclick="swap_content('span:i513'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i513" onclick="swap_content('span:i513'); return false;"><b>BOUNDED_HASSE_DIAGRAM</b></a>
			()  

			<div style="display: inline" id="span:i513" class="foldit"><br/><div class="descr_func"><div class="descr"><p> <a href="#i486" onclick="unfold('span:i486');">HASSE_DIAGRAM</a> constrained to affine vertices
 Nodes representing the maximal inclusion-independent faces are connected to the top-node
 regardless of their dimension</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i515" onclick="swap_content('span:i515'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i515" onclick="swap_content('span:i515'); return false;"><b>BOUNDED_VERTICES</b></a>
			()  

			
				→ Set&lt;Int&gt;<div style="display: inline" id="span:i515" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Indices of <a href="#i555" onclick="unfold('span:i555');">VERTICES</a> that are no rays.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i362" onclick="swap_content('span:i362'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i362" onclick="swap_content('span:i362'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i362" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i520" onclick="swap_content('span:i520'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i520" onclick="swap_content('span:i520'); return false;"><b>GALE</b></a>
			()  

			
				→ Visual::Gale<div style="display: inline" id="span:i520" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Generate the Gale diagram of a <em class="param">d</em>-polyhedron with at most <em class="param">d+4</em> vertices.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td>Visual::Gale</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i526" onclick="swap_content('span:i526'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i526" onclick="swap_content('span:i526'); return false;"><b>SCHLEGEL</b></a>
			()  

			
				→ Visual::SchlegelDiagram<div style="display: inline" id="span:i526" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Create a Schlegel diagram and draw it.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>FIXME</td><td class="param">proj_facet</td><td><div class="descr"><div>decorations for the Edges of the projection face </div></div></td></tr><tr><td>option list:</td><td>schlegel_init</td></tr><tr><td>option list:</td><td>Visual::Wire::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i264" onclick="unfold('span:i264');">Visual::SchlegelDiagram</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i519" onclick="swap_content('span:i519'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i519" onclick="swap_content('span:i519'); return false;"><b>VISUAL</b></a>
			()  

			
				→ Visual::Polytope<div style="display: inline" id="span:i519" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize a polytope as a graph (if 1d), or as a solid object (if 2d or 3d),
 or as a Schlegel diagram (4d).</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i265" onclick="unfold('span:i265');">Visual::Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i524" onclick="swap_content('span:i524'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i524" onclick="swap_content('span:i524'); return false;"><b>VISUAL_BOUNDED_GRAPH</b></a>
			()  

			
				→ Visual::PolytopeGraph<div style="display: inline" id="span:i524" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i710" onclick="unfold('span:i710');">BOUNDED_COMPLEX.GRAPH</a> of a polyhedron.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the string embedder</div></div></td></tr><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i263" onclick="unfold('span:i263');">Visual::PolytopeGraph</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i518" onclick="swap_content('span:i518'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i518" onclick="swap_content('span:i518'); return false;"><b>VISUAL_DUAL</b></a>
			()  

			
				→ Visual::Polygons<div style="display: inline" id="span:i518" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the dual polytope as a solid 3-d object. The polytope must be <a href="#i557" onclick="unfold('span:i557');">BOUNDED</a> and <a href="#i561" onclick="unfold('span:i561');">CENTERED</a>.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Polygons</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i517" onclick="swap_content('span:i517'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i517" onclick="swap_content('span:i517'); return false;"><b>VISUAL_DUAL_FACE_LATTICE</b></a>
			()  

			
				→ Visual::PolytopeLattice<div style="display: inline" id="span:i517" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the dual <a href="#i486" onclick="unfold('span:i486');">face lattice</a> of a polyhedron as a multi-layer graph.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the node placement</div></div></td></tr><tr><td>option list:</td><td>Visual::Lattice::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i262" onclick="unfold('span:i262');">Visual::PolytopeLattice</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i525" onclick="swap_content('span:i525'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i525" onclick="swap_content('span:i525'); return false;"><b>VISUAL_DUAL_GRAPH</b></a>
			()  

			
				→ Visual::Graph<div style="display: inline" id="span:i525" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i479" onclick="unfold('span:i479');">DUAL_GRAPH</a> of a polyhedron.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the string embedder</div></div></td></tr><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Graph</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i523" onclick="swap_content('span:i523'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i523" onclick="swap_content('span:i523'); return false;"><b>VISUAL_FACE_LATTICE</b></a>
			()  

			
				→ Visual::PolytopeLattice<div style="display: inline" id="span:i523" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i486" onclick="unfold('span:i486');">HASSE_DIAGRAM</a> of a polyhedron as a multi-layer graph.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the node placement</div></div></td></tr><tr><td>option list:</td><td>Visual::Lattice::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i262" onclick="unfold('span:i262');">Visual::PolytopeLattice</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i522" onclick="swap_content('span:i522'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i522" onclick="swap_content('span:i522'); return false;"><b>VISUAL_GRAPH</b></a>
			()  

			
				→ Visual::PolytopeGraph<div style="display: inline" id="span:i522" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i588" onclick="unfold('span:i588');">GRAPH</a> of a polyhedron.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the string embedder</div></div></td></tr><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i263" onclick="unfold('span:i263');">Visual::PolytopeGraph</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i521" onclick="swap_content('span:i521'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i521" onclick="swap_content('span:i521'); return false;"><b>VISUAL_TRIANGULATION_BOUNDARY</b></a>
			()  

			
				→ Visual::Polygons<div style="display: inline" id="span:i521" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#" onclick="unfold('span:');" class="invalid">TRIANGULATION_BOUNDARY</a> of the polytope.
 <strong>Obsolete:</strong> the preferred procedure is to create a <a href="topaz.html#i17" onclick="unfold('span:i17');">SimplicialComplex</a> using
 the <a href="#" onclick="unfold('span:');" class="invalid">boundary_complex</a> client of the application 
 &lt;a target="_top" href="../../topaz/model.html"&gt;topaz&lt;/a&gt;
 and call its <a href="topaz.html#i109" onclick="unfold('span:i109');">VISUAL</a> method.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygon::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Polygons</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i40" onclick="swap_content('span:i40'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i40" onclick="swap_content('span:i40'); return false;"><span class="object">Polytope&lt;Float&gt;</span></a></h3></div><div style="display: inline" id="span:i40" class="foldit"><div class="descr"><p> A pointed polyhedron realized in R<sup>d</sup>.</p><p> Convex hull and related algorithms use floating-point arithmetics.
 Due to numerical errors inherent to this kind of computations, the resulting
 combinatorial description can be arbitrarily far away from the truth, or even
 not correspond to any valid polytope.  You have been warned.</p><p> None of the standard construction clients produces objects of this type.
 If you want to get one, create it with the explicit constructor or <a href="#i120" onclick="unfold('span:i120');">convert_to</a>.</p></div><b>derived from: </b><a href="#i38" onclick="unfold('span:i38');">Polytope</a><br/><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i43" onclick="swap_content('span:i43'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i43" onclick="swap_content('span:i43'); return false;"><span class="object">Polytope&lt;Rational&gt;</span></a></h3></div><div style="display: inline" id="span:i43" class="foldit"><b>derived from: </b><a href="#i38" onclick="unfold('span:i38');">Polytope</a><br/><div class="level3"/><h4>Properties of Polytope&lt;Rational&gt;</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i396" onclick="swap_content('span:i396'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i396" onclick="swap_content('span:i396'); return false;"><b>MINKOWSKI_SUMMAND_CONE</b>:
		</a><a href="#i47" onclick="unfold('span:i47');">Cone&lt;Rational&gt;</a><br/><div style="display: inline" id="span:i396" class="foldit"><div class="descr"><p> The cone of all Minkowski summands of the polytope P.
 Up to scaling, a polytope S is a Minkowski summand of P if and only if 
 the edge directions of S are a subset of those of P, 
 and the closing condition around any 2-face of P is preserved. 
 Coordinates of the cone correspond to the rescaled lengths 
 of the edges of the graph of P (in the order given by the property <a href="graph.html#i73" onclick="unfold('span:i73');">EDGES</a> of the <a href="#i588" onclick="unfold('span:i588');">GRAPH</a> of P). 
 The Minkowski cone is defined as the intersection of all 
 equations given by the closing condition around 2-faces with the positive orthant.
 For more information see e.g. 
      Klaus Altmann: The versal deformation of an isolated toric Gorenstein singularity</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i395" onclick="swap_content('span:i395'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i395" onclick="swap_content('span:i395'); return false;"><span class="category">0/1-polytopes</span></a></h3></div><div style="display: inline" id="span:i395" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i634" onclick="swap_content('span:i634'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i634" onclick="swap_content('span:i634'); return false;"><b>N_01POINTS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i634" class="foldit"><div class="descr"><p> Number of points with 0/1-coordinates in a polytope.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i394" onclick="swap_content('span:i394'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i394" onclick="swap_content('span:i394'); return false;"><span class="category">Lattice Points in Polytopes</span></a></h3></div><div style="display: inline" id="span:i394" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i631" onclick="swap_content('span:i631'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i631" onclick="swap_content('span:i631'); return false;"><b>BOUNDARY_LATTICE_POINTS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Integer, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i631" class="foldit"><div class="descr"><p> The lattice points on the boundary of the polytope, including the vertices</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i628" onclick="swap_content('span:i628'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i628" onclick="swap_content('span:i628'); return false;"><b>INTERIOR_LATTICE_POINTS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Integer, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i628" class="foldit"><div class="descr"><p> The lattice points strictly in the interior of the polytope</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i629" onclick="swap_content('span:i629'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i629" onclick="swap_content('span:i629'); return false;"><b>LATTICE_POINTS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Integer, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i629" class="foldit"><div class="descr"><p> The lattice points in the polytope</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i633" onclick="swap_content('span:i633'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i633" onclick="swap_content('span:i633'); return false;"><b>N_BOUNDARY_LATTICE_POINTS</b>:
		</a><a href="common.html#i33" onclick="unfold('span:i33');">common::Integer</a><br/><div style="display: inline" id="span:i633" class="foldit"><div class="descr"><p> The number of <a href="#i631" onclick="unfold('span:i631');">BOUNDARY_LATTICE_POINTS</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i630" onclick="swap_content('span:i630'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i630" onclick="swap_content('span:i630'); return false;"><b>N_INTERIOR_LATTICE_POINTS</b>:
		</a><a href="common.html#i33" onclick="unfold('span:i33');">common::Integer</a><br/><div style="display: inline" id="span:i630" class="foldit"><div class="descr"><p> The number of <a href="#i628" onclick="unfold('span:i628');">INTERIOR_LATTICE_POINTS</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i632" onclick="swap_content('span:i632'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i632" onclick="swap_content('span:i632'); return false;"><b>N_LATTICE_POINTS</b>:
		</a><a href="common.html#i33" onclick="unfold('span:i33');">common::Integer</a><br/><div style="display: inline" id="span:i632" class="foldit"><div class="descr"><p> The number of <a href="#i629" onclick="unfold('span:i629');">LATTICE_POINTS</a></p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i393" onclick="swap_content('span:i393'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i393" onclick="swap_content('span:i393'); return false;"><span class="category">Lattice polytopes</span></a></h3></div><div style="display: inline" id="span:i393" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i627" onclick="swap_content('span:i627'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i627" onclick="swap_content('span:i627'); return false;"><b>LATTICE</b>:
		</a><a href="common.html#i8" onclick="unfold('span:i8');">common::Bool</a><br/><div style="display: inline" id="span:i627" class="foldit"><div class="descr"><p> This is the defining property: A polytope is lattice if each vertex has integer coordinates.</p></div></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of Polytope&lt;Rational&gt;</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i391" onclick="swap_content('span:i391'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i391" onclick="swap_content('span:i391'); return false;"><b>MINKOWSKI_SUMMAND_COEFF</b></a>
			(coeff)  

			
				→ Polytope&lt;Rational&gt;<div style="display: inline" id="span:i391" class="foldit"><br/><div class="descr_func"><div class="descr"><p> returns the Minkowski summand of a polytope P given by 
 a coefficient vector to the rays of the <a href="#i396" onclick="unfold('span:i396');">MINKOWSKI_SUMMAND_CONE</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Rational&gt;</a></td><td class="param">coeff</td><td><div class="descr"><div>coefficient vector to the rays of the Minkowski summand cone</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i43" onclick="unfold('span:i43');">Polytope&lt;Rational&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i392" onclick="swap_content('span:i392'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i392" onclick="swap_content('span:i392'); return false;"><b>MINKOWSKI_SUMMAND_POINT</b></a>
			(point)  

			
				→ Polytope&lt;Rational&gt;<div style="display: inline" id="span:i392" class="foldit"><br/><div class="descr_func"><div class="descr"><p> returns the Minkowski summand of a polytope P given by 
 a point in the <a href="#i396" onclick="unfold('span:i396');">MINKOWSKI_SUMMAND_CONE</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Rational&gt;</a></td><td class="param">point</td><td><div class="descr"><div>point in the Minkowski summand cone</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i43" onclick="unfold('span:i43');">Polytope&lt;Rational&gt;</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i45" onclick="swap_content('span:i45'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i45" onclick="swap_content('span:i45'); return false;"><span class="object">PropagatedPolytope</span></a></h3></div><div style="display: inline" id="span:i45" class="foldit"><div class="descr"><p> Polytope propagation means to define a polytope inductively by assigning vectors to arcs
 of a directed graph.  At each node of such a graph a polytope arises as the joint convex hull
 of the polytopes at the translated sources of the inward pointing arcs.</p><p> For details see 
       Joswig: Polytope Propagation on Graphs.
       Chapter 6 in 
       Pachter/Sturmfels: Algebraic Statistics for Computational Biology, Cambridge 2005.</p></div><b>derived from: </b><a href="#i38" onclick="unfold('span:i38');">Polytope</a><br/><div class="level3"/><h4>Properties of PropagatedPolytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i398" onclick="swap_content('span:i398'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i398" onclick="swap_content('span:i398'); return false;"><b>SUM_PRODUCT_GRAPH</b>:
		</a><a href="graph.html#i12" onclick="unfold('span:i12');">graph::Graph&lt;Directed&gt;</a><br/><div style="display: inline" id="span:i398" class="foldit"><div class="descr"><p> Directed graph to define the propagated polytope.  There is a (translation) vector assigned to each arc.
 We assume that this graph is acyclic with a unique sink.</p></div><h4>Properties of SUM_PRODUCT_GRAPH</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i689" onclick="swap_content('span:i689'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i689" onclick="swap_content('span:i689'); return false;"><b>TRANSLATIONS</b>:
		</a><a href="common.html#i25" onclick="unfold('span:i25');">common::EdgeMap&lt;Directed, Vector&lt;Scalar&gt;&gt;</a><br/><div style="display: inline" id="span:i689" class="foldit"><div class="descr"><p> The translation vectors of the arcs.</p></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i35" onclick="swap_content('span:i35'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i35" onclick="swap_content('span:i35'); return false;"><span class="object">SchlegelDiagram</span></a></h3></div><div style="display: inline" id="span:i35" class="foldit"><div class="descr"><p> A Schlegel diagram of a polytope</p></div><div class="level3"/><h4>Properties of SchlegelDiagram</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i322" onclick="swap_content('span:i322'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i322" onclick="swap_content('span:i322'); return false;"><b>FACET</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i322" class="foldit"><div class="descr"><p> The facet number in the original polytope, giving the projection plane.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i327" onclick="swap_content('span:i327'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i327" onclick="swap_content('span:i327'); return false;"><b>FACET_POINT</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i327" class="foldit"><div class="descr"><p> The intersection point of the projection facet and the view ray.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i329" onclick="swap_content('span:i329'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i329" onclick="swap_content('span:i329'); return false;"><b>INNER_POINT</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i329" class="foldit"><div class="descr"><p> A point on the view ray lying inside the polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i323" onclick="swap_content('span:i323'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i323" onclick="swap_content('span:i323'); return false;"><b>ROTATION</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Float, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i323" class="foldit"><div class="descr"><p> Rotation matrix making the projection facet coinciding with (0 0 0 -1)
 We want a negatively oriented coordinate system
 since the view point lies on the negative side of the facet.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i324" onclick="swap_content('span:i324'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i324" onclick="swap_content('span:i324'); return false;"><b>TRANSFORM</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i324" class="foldit"><div class="descr"><p> Matrix of a projective transformation mapping the whole polytope into the <a href="#i322" onclick="unfold('span:i322');">FACET</a>
 The points belonging to this facet stay fixed.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i328" onclick="swap_content('span:i328'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i328" onclick="swap_content('span:i328'); return false;"><b>VERTICES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Float, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i328" class="foldit"><div class="descr"><p> Coordinates in affine 3-space of the vertices which
 correspond to a 3-dimensional (Schlegel-) projection of a 4-polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i325" onclick="swap_content('span:i325'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i325" onclick="swap_content('span:i325'); return false;"><b>VIEWPOINT</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i325" class="foldit"><div class="descr"><p> The center point of the projection, lying outside the polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i326" onclick="swap_content('span:i326'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i326" onclick="swap_content('span:i326'); return false;"><b>ZOOM</b>:
		</a>Scalar<br/><div style="display: inline" id="span:i326" class="foldit"><div class="descr"><p> Zoom factor.</p></div></div></div></div></li></ul><h4>User Methods of SchlegelDiagram</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i321" onclick="swap_content('span:i321'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i321" onclick="swap_content('span:i321'); return false;"><b>VISUAL</b></a>
			()  

			
				→ Visual::SchlegelDiagram<div style="display: inline" id="span:i321" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw the Schlegel diagram</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>pm::perl::Hash</td><td class="param">proj_facet</td><td><div class="descr"><div>decoration for the edges of the projection face</div></div></td></tr><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i264" onclick="unfold('span:i264');">Visual::SchlegelDiagram</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i33" onclick="swap_content('span:i33'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i33" onclick="swap_content('span:i33'); return false;"><span class="object">SymmetricCone</span></a></h3></div><div style="display: inline" id="span:i33" class="foldit"><div class="undoc"><p>UNDOCUMENTED</p></div><b>derived from: </b><a href="#i34" onclick="unfold('span:i34');">Cone</a><br/><div class="level3"/><h4>Properties of SymmetricCone</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i305" onclick="swap_content('span:i305'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i305" onclick="swap_content('span:i305'); return false;"><b>GEN_EQUATIONS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i305" class="foldit"><div class="descr"><p> category: Symmetric Cones
 Some generating equations for (a subset of) the linear span of the symmetric cone.
 Redundancies are allowed.</p><p> Input section only.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i303" onclick="swap_content('span:i303'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i303" onclick="swap_content('span:i303'); return false;"><b>GEN_INEQUALITIES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i303" class="foldit"><div class="descr"><p> category: Symmetric Cones
 Some generating inequalities for the symmetric cone; redundancies are allowed.</p><p> Input section only.  Ask for <a href="#" onclick="unfold('span:');" class="invalid">REPRESENTATIVE_FACETS</a> if you want a list of representatives for the 
 orbits of facets of a symmetric cone.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i304" onclick="swap_content('span:i304'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i304" onclick="swap_content('span:i304'); return false;"><b>GEN_INPUT_LINEALITY</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i304" class="foldit"><div class="descr"><p> category: Symmetric Cones
 Some generating input rays for (a subset of) the lineality space of the symmetric cone.
 Redundancies are allowed.</p><p> Input section only.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i307" onclick="swap_content('span:i307'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i307" onclick="swap_content('span:i307'); return false;"><b>GEN_INPUT_RAYS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i307" class="foldit"><div class="descr"><p> category: Symmetric Cones
 Some generating input rays for the symmetric cone; redundancies are allowed.</p><p> Input section only.  Ask for <a href="#" onclick="unfold('span:');" class="invalid">REPRESENTATIVE_RAYS</a> if you want a list of representatives for the 
 orbits of rays of a symmetric cone.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i306" onclick="swap_content('span:i306'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i306" onclick="swap_content('span:i306'); return false;"><span class="category">Symmetric Cones</span></a></h3></div><div style="display: inline" id="span:i306" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i436" onclick="swap_content('span:i436'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i436" onclick="swap_content('span:i436'); return false;"><b>N_GEN_EQUATIONS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i436" class="foldit"><div class="descr"><p> The number of <a href="#i305" onclick="unfold('span:i305');">GEN_EQUATIONS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i435" onclick="swap_content('span:i435'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i435" onclick="swap_content('span:i435'); return false;"><b>N_GEN_INEQUALITIES</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i435" class="foldit"><div class="descr"><p> The number of <a href="#i303" onclick="unfold('span:i303');">GEN_INEQUALITIES</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i438" onclick="swap_content('span:i438'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i438" onclick="swap_content('span:i438'); return false;"><b>N_GEN_INPUT_LINEALITY</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i438" class="foldit"><div class="descr"><p> The number of <a href="#i304" onclick="unfold('span:i304');">GEN_INPUT_LINEALITY</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i437" onclick="swap_content('span:i437'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i437" onclick="swap_content('span:i437'); return false;"><b>N_GEN_INPUT_RAYS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i437" class="foldit"><div class="descr"><p> The number of <a href="#i307" onclick="unfold('span:i307');">GEN_INPUT_RAYS</a>.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i302" onclick="swap_content('span:i302'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i302" onclick="swap_content('span:i302'); return false;"><span class="category">Symmetric cones</span></a></h3></div><div style="display: inline" id="span:i302" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i434" onclick="swap_content('span:i434'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i434" onclick="swap_content('span:i434'); return false;"><b>GENERATING_GROUP</b>:
		</a><a href="group.html#i10" onclick="unfold('span:i10');">group::GroupOfCone</a><br/><div style="display: inline" id="span:i434" class="foldit"><div class="descr"><p> The group which generates the cone by being applied to some 
 <a href="#i307" onclick="unfold('span:i307');">GEN_INPUT_RAYS</a> (and <a href="#i304" onclick="unfold('span:i304');">GEN_INPUT_LINEALITY</a>) or some
 <a href="#i303" onclick="unfold('span:i303');">GEN_INEQUALITIES</a> (and <a href="#i305" onclick="unfold('span:i305');">GEN_EQUATIONS</a>).</p></div></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of SymmetricCone</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i301" onclick="swap_content('span:i301'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i301" onclick="swap_content('span:i301'); return false;"><b>VISUAL_ORBIT_COLORED_GRAPH</b></a>
			()  

			
				→ Visual::ConeGraph<div style="display: inline" id="span:i301" class="foldit"><br/><div class="descr_func"><div class="descr"><p> category: Visualization
 FIXME: Should be a method of a SymmetricGraph object (to be defined!)!
 Visualizes the graph of a symmetric cone: 
 All nodes belonging to one orbit get the same color.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::ConeGraph</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i46" onclick="swap_content('span:i46'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i46" onclick="swap_content('span:i46'); return false;"><span class="object">SymmetricPolytope</span></a></h3></div><div style="display: inline" id="span:i46" class="foldit"><div class="undoc"><p>UNDOCUMENTED</p></div><b>derived from: </b><a href="#i33" onclick="unfold('span:i33');">SymmetricCone</a><br/><div class="level3"/><h4>Properties of SymmetricPolytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i401" onclick="swap_content('span:i401'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i401" onclick="swap_content('span:i401'); return false;"><b>GEN_POINTS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i401" class="foldit"><div class="descr"><p> properties
 Alias for property <a href="#i307" onclick="unfold('span:i307');">GEN_INPUT_RAYS</a>.</p></div></div></div></div></li></ul><h4>User Methods of SymmetricPolytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i400" onclick="swap_content('span:i400'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i400" onclick="swap_content('span:i400'); return false;"><b>AMBIENT_DIM</b></a>
			()  

			<div style="display: inline" id="span:i400" class="foldit"><br/><div class="descr_func"><div class="descr"><p> must be copied (from common.rules) since SymmetricPolytope is derived from both objects, SymmetricCone and Polytope</p></div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i399" onclick="swap_content('span:i399'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i399" onclick="swap_content('span:i399'); return false;"><b>DIM</b></a>
			()  

			<div style="display: inline" id="span:i399" class="foldit"><br/><div class="descr_func"><div class="descr"><p> must be copied (from common.rules) since SymmetricPolytope is derived from both objects, SymmetricCone and Polytope</p></div></div><div class="level3"/></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i42" onclick="swap_content('span:i42'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i42" onclick="swap_content('span:i42'); return false;"><span class="object">TightSpan</span></a></h3></div><div style="display: inline" id="span:i42" class="foldit"><div class="descr"><p> Bounded subcomplex of an unbounded polyhedron, which is associated with a finite metric space.
 The tight span is 1-dimensional if and only if the metric is tree-like.  In this sense, the tight
 span captures the deviation of the metric from a tree-like one.</p></div><b>derived from: </b><a href="#i38" onclick="unfold('span:i38');">Polytope</a><br/><div class="level3"/><h4>Properties of TightSpan</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i390" onclick="swap_content('span:i390'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i390" onclick="swap_content('span:i390'); return false;"><span class="category">Phylogenetic Analysis</span></a></h3></div><div style="display: inline" id="span:i390" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i623" onclick="swap_content('span:i623'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i623" onclick="swap_content('span:i623'); return false;"><b>COHERENT_SPLITS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Pair&lt;Set&lt;Int&gt;, Set&lt;Int&gt;&gt;&gt;</a><br/><div style="display: inline" id="span:i623" class="foldit"><div class="descr"><p> Coherent non-trivial splits.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i626" onclick="swap_content('span:i626'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i626" onclick="swap_content('span:i626'); return false;"><b>METRIC</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i626" class="foldit"><div class="descr"><p> Finite metric space encoded as a (symmetric) distance matrix.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i625" onclick="swap_content('span:i625'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i625" onclick="swap_content('span:i625'); return false;"><b>TAXA</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a><br/><div style="display: inline" id="span:i625" class="foldit"><div class="descr"><p> Labels for the rows and columns of the <a href="#i626" onclick="unfold('span:i626');">METRIC</a> space.
 Default TAXA are just consecutive numbers.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i624" onclick="swap_content('span:i624'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i624" onclick="swap_content('span:i624'); return false;"><b>VERTICES_IN_METRIC</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i624" class="foldit"><div class="descr"><p> Row indices in the <a href="#i626" onclick="unfold('span:i626');">METRIC</a> matrix or -1</p></div></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of TightSpan</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i389" onclick="swap_content('span:i389'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i389" onclick="swap_content('span:i389'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i389" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i620" onclick="swap_content('span:i620'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i620" onclick="swap_content('span:i620'); return false;"><b>VISUAL_BOUNDED_GRAPH</b></a>
			()  

			
				→ Visual::PolytopeGraph<div style="display: inline" id="span:i620" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#" onclick="unfold('span:');" class="invalid">BOUNDED_COMPLEX.GRAPH</a> of a tight span.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the string embedder</div></div></td></tr><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i263" onclick="unfold('span:i263');">Visual::PolytopeGraph</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i621" onclick="swap_content('span:i621'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i621" onclick="swap_content('span:i621'); return false;"><b>VISUAL_SPLITS</b></a>
			()  

			
				→ Visual::FiniteMetricSpace<div style="display: inline" id="span:i621" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the splits of a finite metric space (that is, a planar image of a tight span).  Calls SplitsTree.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td>Visual::FiniteMetricSpace</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i622" onclick="swap_content('span:i622'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i622" onclick="swap_content('span:i622'); return false;"><b>VISUAL_TIGHT_SPAN</b></a>
			()  

			
				→ Visual::Graph<div style="display: inline" id="span:i622" class="foldit"><br/><div class="descr_func"><div class="descr"><p> This is a variation of <a href="#i524" onclick="unfold('span:i524');">Polytope::VISUAL_BOUNDED_GRAPH</a> for the special case of a tight span.
 The vertices are embedded according to the <a href="#i626" onclick="unfold('span:i626');">METRIC</a>, the others are hanged in between.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the string embedder</div></div></td></tr><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">norm</td><td><div class="descr"><div>which norm to use when calculating the distances between metric vectors ("max" or "square")</div></div></td></tr><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Graph</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i261" onclick="swap_content('span:i261'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i261" onclick="swap_content('span:i261'); return false;"><span class="object">Visual::PointConfiguration</span></a></h3></div><div style="display: inline" id="span:i261" class="foldit"><b>Category: </b>Visualization<br/><div class="descr"><p> Visualization of the point configuration.</p></div><div class="level3"/><h4>User Methods of Visual::PointConfiguration</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i598" onclick="swap_content('span:i598'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i598" onclick="swap_content('span:i598'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i598" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i671" onclick="swap_content('span:i671'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i671" onclick="swap_content('span:i671'); return false;"><b>POLYTOPAL_SUBDIVISION</b></a>
			()  

			
				→ Visual::PointConfiguration<div style="display: inline" id="span:i671" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i671" onclick="unfold('span:i671');">POLYTOPAL_SUBDIVISION</a> of a point configuration</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i261" onclick="unfold('span:i261');">Visual::PointConfiguration</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i669" onclick="swap_content('span:i669'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i669" onclick="swap_content('span:i669'); return false;"><b>TRIANGULATION</b></a>
			()  

			
				→ Visual::PointConfiguration<div style="display: inline" id="span:i669" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i669" onclick="unfold('span:i669');">TRIANGULATION</a> of a point configuration</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i261" onclick="unfold('span:i261');">Visual::PointConfiguration</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i670" onclick="swap_content('span:i670'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i670" onclick="swap_content('span:i670'); return false;"><b>TRIANGULATION_BOUNDARY</b></a>
			()  

			
				→ Visual::PointConfiguration<div style="display: inline" id="span:i670" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw the edges of the <a href="#" onclick="unfold('span:');" class="invalid">TRIANGULATION_BOUNDARY</a>.
 The facets are made transparent.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i261" onclick="unfold('span:i261');">Visual::PointConfiguration</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i265" onclick="swap_content('span:i265'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i265" onclick="swap_content('span:i265'); return false;"><span class="object">Visual::Polytope</span></a></h3></div><div style="display: inline" id="span:i265" class="foldit"><b>Category: </b>Visualization<br/><div class="descr"><p> Visualization of a polytope as a graph (if 1d), or as a solid object (if 2d or 3d),
 or as a Schlegel diagram (4d).</p></div><div class="level3"/><h4>User Methods of Visual::Polytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i603" onclick="swap_content('span:i603'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i603" onclick="swap_content('span:i603'); return false;"><b>DIRECTED_GRAPH</b></a>
			(lp)  

			
				→ Visual::Polytope<div style="display: inline" id="span:i603" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Illustrate the behavior of a linear objective function on the polytope.
 Superpose the drawing with the directed graph induced by the objective function.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a Linear Program object attached to the polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i265" onclick="unfold('span:i265');">Visual::Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i606" onclick="swap_content('span:i606'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i606" onclick="swap_content('span:i606'); return false;"><b>MIN_MAX_FACE</b></a>
			(lp)  

			
				→ Visual::Polytope<div style="display: inline" id="span:i606" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Illustrate the behavior of a linear objective function on the polytope.
 Draw the facets contained in <a href="#i619" onclick="unfold('span:i619');">MAXIMAL_FACE</a> and <a href="#i617" onclick="unfold('span:i617');">MINIMAL_FACE</a> in distinct colors.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a LinearProgram object attached to the polytope.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td>Color</td><td class="param">min</td><td><div class="descr"><div>minimal face decoration (default: yellow vertices and/or facets)</div></div></td></tr><tr><td>Color</td><td class="param">max</td><td><div class="descr"><div>maximal face decoration (default: red vertices and/or facets)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i265" onclick="unfold('span:i265');">Visual::Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i604" onclick="swap_content('span:i604'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i604" onclick="swap_content('span:i604'); return false;"><b>VERTEX_COLORS</b></a>
			(lp)  

			
				→ Visual::Polytope<div style="display: inline" id="span:i604" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Illustrate the behavior of a linear objective function on the polytope.
 Color the vertices according to the values of the objective function.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a LinearProgram object attached to the polytope</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td>Color</td><td class="param">min</td><td><div class="descr"><div>minimal vertex color (default: yellow)</div></div></td></tr><tr><td>Color</td><td class="param">max</td><td><div class="descr"><div>maximal vertex color (default: red)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i265" onclick="unfold('span:i265');">Visual::Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i605" onclick="swap_content('span:i605'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i605" onclick="swap_content('span:i605'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i605" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i683" onclick="swap_content('span:i683'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i683" onclick="swap_content('span:i683'); return false;"><b>LATTICE</b></a>
			()  

			
				→ Visual::Polytope<div style="display: inline" id="span:i683" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i629" onclick="unfold('span:i629');">LATTICE_POINTS</a> of a polytope</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::PointSet::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i265" onclick="unfold('span:i265');">Visual::Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i686" onclick="swap_content('span:i686'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i686" onclick="swap_content('span:i686'); return false;"><b>LATTICE_COLORED</b></a>
			()  

			
				→ Visual::Polytope<div style="display: inline" id="span:i686" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i629" onclick="unfold('span:i629');">LATTICE_POINTS</a> of a polytope in different colors (interior / boundary / vertices)</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::PointSet::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i265" onclick="unfold('span:i265');">Visual::Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i687" onclick="swap_content('span:i687'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i687" onclick="swap_content('span:i687'); return false;"><b>STEINER</b></a>
			()  

			
				→ Visual::Polytope<div style="display: inline" id="span:i687" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Add the <a href="#i562" onclick="unfold('span:i562');">STEINER_POINTS</a> to the 3-d visualization.
 The facets become transparent.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::PointSet::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i265" onclick="unfold('span:i265');">Visual::Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i684" onclick="swap_content('span:i684'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i684" onclick="swap_content('span:i684'); return false;"><b>TRIANGULATION</b></a>
			(TR)  

			
				→ Visual::Polytope<div style="display: inline" id="span:i684" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Add the triangulation to the drawing.  The facets of the whole polytope become transparent.</p><p> You may specify any triangulation of the current polytope.
 Per default, the <a href="#i497" onclick="unfold('span:i497');">TRIANGULATION</a> property is taken.
 (Currently there is only one possible alternative triangulation: <a href="#i496" onclick="unfold('span:i496');">TRIANGULATION_INT</a>).</p><p> <strong>Hint:</strong> Use the method <em class="u">Method -&gt; Effect -&gt; Explode Group of Geometries</em>
 of <a href="http://polymake.org//external_software#javaview" onclick="unfold('span:javaview');">JavaView</a> for better insight in the internal structure.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td class="param">TR</td><td><div class="descr"><div>facets of the triangulation</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i265" onclick="unfold('span:i265');">Visual::Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i685" onclick="swap_content('span:i685'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i685" onclick="swap_content('span:i685'); return false;"><b>TRIANGULATION_BOUNDARY</b></a>
			()  

			
				→ Visual::Polytope<div style="display: inline" id="span:i685" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw the edges of the <a href="#" onclick="unfold('span:');" class="invalid">Polytope::TRIANGULATION_BOUNDARY</a>.
 The facets are made transparent.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i265" onclick="unfold('span:i265');">Visual::Polytope</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i263" onclick="swap_content('span:i263'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i263" onclick="swap_content('span:i263'); return false;"><span class="object">Visual::PolytopeGraph</span></a></h3></div><div style="display: inline" id="span:i263" class="foldit"><b>Category: </b>Visualization<br/><div class="descr"><p> Visualization of the graph of a polyhedron.</p></div><div class="level3"/><h4>User Methods of Visual::PolytopeGraph</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i600" onclick="swap_content('span:i600'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i600" onclick="swap_content('span:i600'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i600" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i672" onclick="swap_content('span:i672'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i672" onclick="swap_content('span:i672'); return false;"><b>DIRECTED_GRAPH</b></a>
			(lp)  

			
				→ Visual::PolytopeGraph<div style="display: inline" id="span:i672" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Show the growth direction of a linear objective function via arrowed edges.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a LinearProgram object attached to the polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i263" onclick="unfold('span:i263');">Visual::PolytopeGraph</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i674" onclick="swap_content('span:i674'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i674" onclick="swap_content('span:i674'); return false;"><b>EDGE_COLORS</b></a>
			()  

			
				→ Visual::PolytopeGraph<div style="display: inline" id="span:i674" class="foldit"><br/><div class="descr_func"><div class="descr"><p> produce an edge coloring of a bounded graph from local data in the Hasse diagram</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="#i263" onclick="unfold('span:i263');">Visual::PolytopeGraph</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i675" onclick="swap_content('span:i675'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i675" onclick="swap_content('span:i675'); return false;"><b>MIN_MAX_FACE</b></a>
			(lp)  

			
				→ Visual::PolytopeGraph<div style="display: inline" id="span:i675" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Illustrate the behavior of a linear objective function on the polytope.
 The vertices belonging to <a href="#i617" onclick="unfold('span:i617');">MINIMAL_FACE</a> and <a href="#i619" onclick="unfold('span:i619');">MAXIMAL_FACE</a> are drawn in distinct colors</p><p> The spring embedder applies an additional force, which tries to arrange the nodes in the z-axis direction
 corresponding to the objective function values.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a LinearProgram object attached to the polytope</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td>Color</td><td class="param">min</td><td><div class="descr"><div>minimal face decoration (default: yellow nodes)</div></div></td></tr><tr><td>Color</td><td class="param">max</td><td><div class="descr"><div>maximal face decoration (default: red nodes)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i263" onclick="unfold('span:i263');">Visual::PolytopeGraph</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i673" onclick="swap_content('span:i673'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i673" onclick="swap_content('span:i673'); return false;"><b>VERTEX_COLORS</b></a>
			(lp)  

			
				→ Visual::PolytopeGraph<div style="display: inline" id="span:i673" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Illustrate the behavior of a linear objective function on the polytope.
 Color the nodes according to the value the objective function takes
 on the vertices.</p><p> The spring embedder applies an additional force, which tries to arrange the nodes in the z-axis direction
 corresponding to the objective function values.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a LinearProgram object attached to the polytope.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td>Color</td><td class="param">min</td><td><div class="descr"><div>minimal face color (default: yellow)</div></div></td></tr><tr><td>Color</td><td class="param">max</td><td><div class="descr"><div>maximal face color (default: red)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i263" onclick="unfold('span:i263');">Visual::PolytopeGraph</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i262" onclick="swap_content('span:i262'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i262" onclick="swap_content('span:i262'); return false;"><span class="object">Visual::PolytopeLattice</span></a></h3></div><div style="display: inline" id="span:i262" class="foldit"><b>Category: </b>Visualization<br/><div class="descr"><p> Visualization of the <a href="#i486" onclick="unfold('span:i486');">HASSE_DIAGRAM</a> of a polyhedron as a multi-layer graph..</p></div><div class="level3"/><h4>User Methods of Visual::PolytopeLattice</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i599" onclick="swap_content('span:i599'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i599" onclick="swap_content('span:i599'); return false;"><b>MIN_MAX_FACE</b></a>
			(lp)  

			
				→ Visual::PolytopeLattice<div style="display: inline" id="span:i599" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Illustrate the behavior of a linear objective function on the polytope.
 Draw the filters of the <a href="#i619" onclick="unfold('span:i619');">MAXIMAL_FACE</a> and <a href="#i617" onclick="unfold('span:i617');">MINIMAL_FACE</a> in distinct colors.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a LinearProgram object attached to the polytope</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td>Color</td><td class="param">min</td><td><div class="descr"><div>minimal face decoration (default: yellow border and ingoing edges)</div></div></td></tr><tr><td>Color</td><td class="param">max</td><td><div class="descr"><div>maximal face decoration (default: red border and ingoing edges)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i262" onclick="unfold('span:i262');">Visual::PolytopeLattice</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i264" onclick="swap_content('span:i264'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i264" onclick="swap_content('span:i264'); return false;"><span class="object">Visual::SchlegelDiagram</span></a></h3></div><div style="display: inline" id="span:i264" class="foldit"><b>Category: </b>Visualization<br/><div class="descr"><p> Visualization of the Schlegel diagram of a polytope.</p></div><div class="level3"/><h4>User Methods of Visual::SchlegelDiagram</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i602" onclick="swap_content('span:i602'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i602" onclick="swap_content('span:i602'); return false;"><b>STEINER</b></a>
			()  

			<div style="display: inline" id="span:i602" class="foldit"><br/><div class="descr_func"><div class="undoc"><p>UNDOCUMENTED</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::PointSet::decorations</td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i601" onclick="swap_content('span:i601'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i601" onclick="swap_content('span:i601'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i601" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i678" onclick="swap_content('span:i678'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i678" onclick="swap_content('span:i678'); return false;"><b>CONSTRUCTION</b></a>
			()  

			
				→ Visual::SchlegelDiagram<div style="display: inline" id="span:i678" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the construction of a 3D Schlegel diagram, that is, the Viewpoint, the 3-polytope and
 the projection onto one facet</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i264" onclick="unfold('span:i264');">Visual::SchlegelDiagram</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i677" onclick="swap_content('span:i677'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i677" onclick="swap_content('span:i677'); return false;"><b>DIRECTED_GRAPH</b></a>
			(lp)  

			
				→ Visual::SchlegelDiagram<div style="display: inline" id="span:i677" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Illustrate the behavior of a linear objective function on the polytope.
 Superpose the drawing with the directed graph induced by the objective function.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a LinearProgram object attached to the polytope.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i264" onclick="unfold('span:i264');">Visual::SchlegelDiagram</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i682" onclick="swap_content('span:i682'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i682" onclick="swap_content('span:i682'); return false;"><b>MIN_MAX_FACE</b></a>
			(lp)  

			
				→ Visual::SchlegelDiagram<div style="display: inline" id="span:i682" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Illustrate the behavior of a linear objective function on the polytope.
 The vertices belonging to <a href="#i617" onclick="unfold('span:i617');">MINIMAL_FACE</a> and <a href="#i619" onclick="unfold('span:i619');">MAXIMAL_FACE</a> are drawn in distinct colors</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a LinearProgram object attached to the polytope.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td>Color</td><td class="param">min</td><td><div class="descr"><div>minimal face decoration (default: yellow vertices and/or facets)</div></div></td></tr><tr><td>Color</td><td class="param">max</td><td><div class="descr"><div>maximal face decoration (default: red vertices and/or facets)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i264" onclick="unfold('span:i264');">Visual::SchlegelDiagram</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i679" onclick="swap_content('span:i679'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i679" onclick="swap_content('span:i679'); return false;"><b>SOLID</b></a>
			()  

			
				→ Visual::SchlegelDiagram<div style="display: inline" id="span:i679" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw the facets of the Schlegel diagram as polytopes.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i264" onclick="unfold('span:i264');">Visual::SchlegelDiagram</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i680" onclick="swap_content('span:i680'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i680" onclick="swap_content('span:i680'); return false;"><b>TRIANGULATION_BOUNDARY</b></a>
			()  

			
				→ Visual::SchlegelDiagram<div style="display: inline" id="span:i680" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw the edges of the <a href="#" onclick="unfold('span:');" class="invalid">TRIANGULATION_BOUNDARY</a></p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i264" onclick="unfold('span:i264');">Visual::SchlegelDiagram</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i681" onclick="swap_content('span:i681'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i681" onclick="swap_content('span:i681'); return false;"><b>TRIANGULATION_BOUNDARY_SOLID</b></a>
			()  

			
				→ Visual::SchlegelDiagram<div style="display: inline" id="span:i681" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw the boundary simplices of the triangulation as solid tetrahedra</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i264" onclick="unfold('span:i264');">Visual::SchlegelDiagram</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i676" onclick="swap_content('span:i676'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i676" onclick="swap_content('span:i676'); return false;"><b>VERTEX_COLORS</b></a>
			(lp)  

			
				→ Visual::SchlegelDiagram<div style="display: inline" id="span:i676" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Illustrate the behavior of a linear objective function on the polytope.
 Color the vertices according to the values of the objective function.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">lp</td><td><div class="descr"><div>a LinearProgram object attached to the polytope.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td>Color</td><td class="param">min</td><td><div class="descr"><div>minimal vertex color (default: yellow)</div></div></td></tr><tr><td>Color</td><td class="param">max</td><td><div class="descr"><div>maximal vertex color (default: red)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i264" onclick="unfold('span:i264');">Visual::SchlegelDiagram</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i48" onclick="swap_content('span:i48'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i48" onclick="swap_content('span:i48'); return false;"><span class="object">VoronoiDiagram</span></a></h3></div><div style="display: inline" id="span:i48" class="foldit"><div class="descr"><p> For a finite set of <a href="#i418" onclick="unfold('span:i418');">SITES</a> <em class="param">S</em> the Voronoi region of each site is the set of points closest
 (with respect to Euclidean distance) to the given site.  All Voronoi regions (and their faces)
 form a polyhedral complex which is a vertical projection of the boundary complex of an unbounded
 polyhedron P(S).  This way VoronoiDiagram becomes a derived class from <a href="#i38" onclick="unfold('span:i38');">Polytope&lt;Scalar&gt;</a>.</p></div><b>derived from: </b><a href="#i38" onclick="unfold('span:i38');">Polytope</a><br/><div class="level3"/><h4>Properties of VoronoiDiagram</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i414" onclick="swap_content('span:i414'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i414" onclick="swap_content('span:i414'); return false;"><b>CRUST_GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i414" class="foldit"><div class="descr"><p> Graph of the crust as defined by Amenta, Bern, and Eppstein.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i420" onclick="swap_content('span:i420'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i420" onclick="swap_content('span:i420'); return false;"><b>DELAUNAY_GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i420" class="foldit"><div class="descr"><p> Graph of the Delaunay decomposition Del(<a href="#i418" onclick="unfold('span:i418');">SITES</a>).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i413" onclick="swap_content('span:i413'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i413" onclick="swap_content('span:i413'); return false;"><b>DELAUNAY_TRIANGULATION</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Set&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i413" class="foldit"><div class="descr"><p> Delaunay triangulation of the <a href="#i418" onclick="unfold('span:i418');">sites</a>. (Delaunay subdivision, non-simplices are triangulated.)</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i411" onclick="swap_content('span:i411'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i411" onclick="swap_content('span:i411'); return false;"><b>ITERATED_DELAUNAY_GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i411" class="foldit"><div class="descr"><p> Graph of the Del(<a href="#i418" onclick="unfold('span:i418');">SITES</a>) + Vor(<a href="#i418" onclick="unfold('span:i418');">SITES</a>).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i416" onclick="swap_content('span:i416'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i416" onclick="swap_content('span:i416'); return false;"><b>ITERATED_VORONOI_GRAPH</b>:
		</a><a href="#i32" onclick="unfold('span:i32');">GeometricGraph&lt;Rational&gt;</a><br/><div style="display: inline" id="span:i416" class="foldit"><div class="descr"><p> Graph of the joint Voronoi diagram of the <a href="#i418" onclick="unfold('span:i418');">SITES</a> and the vertices of Vor(SITES).  The coordinates (homogeneous, before projection)
 are stored as node attributes.  The graph is truncated according to the <a href="#" onclick="unfold('span:');" class="invalid">VORONOI_GRAPH.BOUNDING_BOX</a>.
 For the default BOUNDING_BOX it may happen that some of the iterated Voronoi vertices are truncated.
 Create new objects of type <a href="#i48" onclick="unfold('span:i48');">VoronoiDiagram</a> to produce proper iterated Voronoi diagrams.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i419" onclick="swap_content('span:i419'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i419" onclick="swap_content('span:i419'); return false;"><b>NN_CRUST_GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i419" class="foldit"><div class="descr"><p> Graph of the nearest neighbor crust, as defined in:</p><p>       T. K. Dey and P. Kumar: A simple provable algorithm for curve reconstruction.
       Proc. 10th. Annu. ACM-SIAM Sympos. Discrete Alg., 1999, 893-894.</p><p> Polygonal reconstruction of a smooth planar curve from a finite set of samples.
 Sampling rate of &lt;= 1/3 suffices.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i421" onclick="swap_content('span:i421'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i421" onclick="swap_content('span:i421'); return false;"><b>NN_GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i421" class="foldit"><div class="descr"><p> Graph of the nearest neighbors.  This is a subgraph of <a href="#i419" onclick="unfold('span:i419');">NN_CRUST_GRAPH</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i410" onclick="swap_content('span:i410'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i410" onclick="swap_content('span:i410'); return false;"><b>N_SITES</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i410" class="foldit"><div class="descr"><p> Number of <a href="#i418" onclick="unfold('span:i418');">SITES</a></p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i418" onclick="swap_content('span:i418'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i418" onclick="swap_content('span:i418'); return false;"><b>SITES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i418" class="foldit"><div class="descr"><p> Coordinates of the sites in case the polyhedron is Voronoi.
 Sites must be pairwise distinct.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i412" onclick="swap_content('span:i412'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i412" onclick="swap_content('span:i412'); return false;"><b>SITE_LABELS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a><br/><div style="display: inline" id="span:i412" class="foldit"><div class="descr"><p> Unique names assigned to the <a href="#i418" onclick="unfold('span:i418');">SITES</a>.  Works like <a href="#i558" onclick="unfold('span:i558');">VERTEX_LABELS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i417" onclick="swap_content('span:i417'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i417" onclick="swap_content('span:i417'); return false;"><b>VORONOI_GRAPH</b>:
		</a><a href="#i32" onclick="unfold('span:i32');">GeometricGraph&lt;Rational&gt;</a><br/><div style="display: inline" id="span:i417" class="foldit"><div class="descr"><p> Graph of the Voronoi diagram of the <a href="#i418" onclick="unfold('span:i418');">SITES</a>.  The homogeneous coordinates after projection are stored as node attributes.
 The graph is truncated according to the <a href="#" onclick="unfold('span:');" class="invalid">BOUNDING_BOX</a>.
 All vertices of the Voronoi diagram are visible (and represented in the <a href="#i417" onclick="unfold('span:i417');">VORONOI_GRAPH</a>) for the default BOUNDING_BOX.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i415" onclick="swap_content('span:i415'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i415" onclick="swap_content('span:i415'); return false;"><b>VORONOI_VERTICES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i415" class="foldit"><div class="descr"><p> Vertices of the Voronoi diagram of the <a href="#i418" onclick="unfold('span:i418');">SITES</a>.</p></div></div></div></div></li></ul><h4>User Methods of VoronoiDiagram</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i409" onclick="swap_content('span:i409'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i409" onclick="swap_content('span:i409'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i409" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i638" onclick="swap_content('span:i638'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i638" onclick="swap_content('span:i638'); return false;"><b>VISUAL_CRUST</b></a>
			()  

			
				→ Visual::Container<div style="display: inline" id="span:i638" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw a Voronoi diagram, its <a href="#i420" onclick="unfold('span:i420');">|dual graph</a> and the <a href="#i414" onclick="unfold('span:i414');">crust</a>.  Use the interactive features of the viewer to select.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Container</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i637" onclick="swap_content('span:i637'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i637" onclick="swap_content('span:i637'); return false;"><b>VISUAL_NN_CRUST</b></a>
			()  

			
				→ Visual::Container<div style="display: inline" id="span:i637" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw a Voronoi diagram, its dual graph and the <a href="#i419" onclick="unfold('span:i419');">nearest neighbor crust</a>.  Use the interactive features of the viewer to select.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Container</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i636" onclick="swap_content('span:i636'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i636" onclick="swap_content('span:i636'); return false;"><b>VISUAL_VORONOI</b></a>
			()  

			
				→ Visual::Container<div style="display: inline" id="span:i636" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Draw a Voronoi diagram and its <a href="#i420" onclick="unfold('span:i420');">dual</a>.  Use the interactive features of the viewer to select.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::Container</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li></ul></div><div class="level2"><h2>User Functions</h2><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i27" onclick="swap_content('span:i27'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i27" onclick="swap_content('span:i27'); return false;"><span class="category">Comparing</span></a></h3></div><div style="display: inline" id="span:i27" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i230" onclick="swap_content('span:i230'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i230" onclick="swap_content('span:i230'); return false;"><b>congruent</b></a>
			(P1, P2)  

			<div style="display: inline" id="span:i230" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Check whether two given polytopes <em class="param">P1</em> and <em class="param">P2</em> are congruent, i.e. whether
 there is an affine isomorphism between them that is induced by a (possibly scaled) orthogonal matrix.
 Returns the scale factor, or 0 if the polytopes are not congruent.</p><p> We are using the reduction of the congruence problem (for arbitrary point sets) to the graph
 isomorphism problem due to:
</p><blockquote><div> Akutsu, T.: On determining the congruence of point sets in `d` dimensions.</div><div> Comput. Geom. Theory Appl. 9, 247--256 (1998), no. 4</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i233" onclick="swap_content('span:i233'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i233" onclick="swap_content('span:i233'); return false;"><b>equal_polyhedra</b></a>
			(P1, P2)  

			<div style="display: inline" id="span:i233" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Tests if the two polyhedra <em class="param">P1</em> and <em class="param">P2</em> are equal.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i235" onclick="swap_content('span:i235'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i235" onclick="swap_content('span:i235'); return false;"><b>find_facet_vertex_permutations</b></a>
			(P1, P2)  

			
				→ Pair&lt;Array&lt;Int&gt;, Array&lt;Int&gt;&gt;<div style="display: inline" id="span:i235" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Find the permutations of facets and vertices which maps the polyhedron <em class="param">P1</em> to <em class="param">P2</em>.
 The facet permutation is the first component of the return value.</p><p> Only the combinatorial isomorphism is considered.
 If the polytopes are not isomorphic, an exception is thrown.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i29" onclick="unfold('span:i29');">Pair&lt;Array&lt;Int&gt;, Array&lt;Int&gt;&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i234" onclick="swap_content('span:i234'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i234" onclick="swap_content('span:i234'); return false;"><b>included_polyhedra</b></a>
			(P1, P2)  

			<div style="display: inline" id="span:i234" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Tests if polyhedron <em class="param">P1</em> is included in polyhedron <em class="param">P2</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i231" onclick="swap_content('span:i231'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i231" onclick="swap_content('span:i231'); return false;"><b>isomorphic</b></a>
			(P1, P2)  

			<div style="display: inline" id="span:i231" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Check whether the face lattices of two polytopes are isomorphic.
 The problem is reduced to graph isomorphism of the vertex-facet incidence graphs.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i232" onclick="swap_content('span:i232'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i232" onclick="swap_content('span:i232'); return false;"><b>lattice_isomorphic_smooth_polytopes</b></a>
			(P1, P2)  

			<div style="display: inline" id="span:i232" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Tests whether two smooth lattice polytopes are lattice equivalent
 by comparing lattice distances between vertices and facets. </p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i37" onclick="unfold('span:i37');">LatticePolytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i37" onclick="unfold('span:i37');">LatticePolytope</a></td><td class="param">P2</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i12" onclick="swap_content('span:i12'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i12" onclick="swap_content('span:i12'); return false;"><span class="category">Consistency check</span></a></h3></div><div style="display: inline" id="span:i12" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i121" onclick="swap_content('span:i121'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i121" onclick="swap_content('span:i121'); return false;"><b>check_inc</b></a>
			(points, hyperplanes, sign, verbose)  

			<div style="display: inline" id="span:i121" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Check coordinate data. For each pair of vectors from two given matrices
 their inner product must satisfy the given relation.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">hyperplanes</td><td/></tr><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">sign</td><td><div class="descr"><div>composed of one or two characters from [-+0], representing the
  allowed domain of the vector inner products.</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">verbose</td><td><div class="descr"><div>print all products violating the required relation</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i122" onclick="swap_content('span:i122'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i122" onclick="swap_content('span:i122'); return false;"><b>check_poly</b></a>
			(VIF)  

			
				→ Polytope<div style="display: inline" id="span:i122" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Try to check whether a given vertex-facet incidence matrix <em class="param">VIF</em> defines a polytope.
 Note that a successful certification by check_poly is <strong>not sufficient</strong>
 to determine whether an incidence matrix actually defines a polytope.
 Think of it as a plausibility check.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i27" onclick="unfold('span:i27');">IncidenceMatrix</a></td><td class="param">VIF</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">dual</td><td><div class="descr"><div>transposes the incidence matrix</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">verbose</td><td><div class="descr"><div>prints information about the check.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i6" onclick="swap_content('span:i6'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i6" onclick="swap_content('span:i6'); return false;"><span class="category">Constructing a cone</span></a></h3></div><div style="display: inline" id="span:i6" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i100" onclick="swap_content('span:i100'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i100" onclick="swap_content('span:i100'); return false;"><b>normal_cone</b></a>
			(p, v)  

			<div style="display: inline" id="span:i100" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the outer normal cone of <em class="param">p</em> at the vertex <em class="param">v</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">p</td><td/></tr><tr><td>int</td><td class="param">v</td><td><div class="descr"><div>vertex number</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i11" onclick="swap_content('span:i11'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i11" onclick="swap_content('span:i11'); return false;"><span class="category">Coordinate conversions</span></a></h3></div><div style="display: inline" id="span:i11" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i119" onclick="swap_content('span:i119'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i119" onclick="swap_content('span:i119'); return false;"><b>affine_float_coords</b></a>
			(P)  

			
				→ Matrix&lt;Float&gt;<div style="display: inline" id="span:i119" class="foldit"><br/><div class="descr_func"><div class="descr"><p> dehomogenize the <a href="#i555" onclick="unfold('span:i555');">vertex coordinates</a> and convert them to Float</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>source object</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix&lt;Float&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i120" onclick="swap_content('span:i120'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i120" onclick="swap_content('span:i120'); return false;"><b>convert_to</b></a>
			&lt;Coord&gt;
		 
			(c)  

			
				→ Cone&lt;Coord&gt;<div style="display: inline" id="span:i120" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Creates a new Cone object with different coordinate type
 target coordinate type <em class="param">Coord</em> must be specified in angle brackets
 e.g. $new_cone = convert_to&lt;Coord&gt;($cone)</p></div></div><div class="level3"><h5>Type Parameters</h5><table class="args"><tr><td class="param">Coord</td><td><div class="descr"><div>target coordinate type</div></div></td></tr></table><h5>Parameters</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td class="param">c</td><td><div class="descr"><div>the input cone</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone&lt;Coord&gt;</a></td><td><div class="descr"><div>a new cone object or <em class="param">C</em> itself it has the requested type</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i296" onclick="swap_content('span:i296'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i296" onclick="swap_content('span:i296'); return false;"><b>convert_to</b></a>
			&lt;Coord&gt;
		 
			(P)  

			
				→ Polytope&lt;Coord&gt;<div style="display: inline" id="span:i296" class="foldit"><br/><div class="descr_func"><div class="descr"><p> provide a Polytope object with desired coordinate type</p></div></div><div class="level3"><h5>Type Parameters</h5><table class="args"><tr><td class="param">Coord</td><td><div class="descr"><div>target coordinate type</div></div></td></tr></table><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>source object</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope&lt;Coord&gt;</a></td><td><div class="descr"><div><em class="param">P</em> if it already has the requested type, a new object otherwise</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i19" onclick="swap_content('span:i19'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i19" onclick="swap_content('span:i19'); return false;"><span class="category">Delaunay subdivisions and Voronoi diagrams</span></a></h3></div><div style="display: inline" id="span:i19" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i150" onclick="swap_content('span:i150'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i150" onclick="swap_content('span:i150'); return false;"><b>delaunay_triangulation</b></a>
			(V)  

			
				→ Array&lt;Set&lt;Int&gt;&gt;<div style="display: inline" id="span:i150" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the (a) Delaunay triangulation of the given <a href="#i418" onclick="unfold('span:i418');">SITES</a> of a VoronoiDiagram <em class="param">V</em>. If the sites are
 not in general position, the non-triangular facets of the Delaunay subdivision are
 triangulated (by applying the beneath-beyond algorithm).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i48" onclick="unfold('span:i48');">VoronoiDiagram</a></td><td class="param">V</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i151" onclick="swap_content('span:i151'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i151" onclick="swap_content('span:i151'); return false;"><b>voronoi</b></a>
			(V)  

			
				→ Matrix<div style="display: inline" id="span:i151" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the inequalities of the Voronoi polyhedron of a given VoronoiDiagram <em class="param">V</em>.
 The polyhedron is always unbounded. Introduce artificial cut facets later
 (e.g., for visualization); this must be done after the vertices have been computed.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i48" onclick="unfold('span:i48');">VoronoiDiagram</a></td><td class="param">V</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i9" onclick="swap_content('span:i9'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i9" onclick="swap_content('span:i9'); return false;"><span class="category">Formatting</span></a></h3></div><div style="display: inline" id="span:i9" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i103" onclick="swap_content('span:i103'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i103" onclick="swap_content('span:i103'); return false;"><b>print_constraints</b></a>
			(P)  

			
				→ bool<div style="display: inline" id="span:i103" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Write the <a href="#i466" onclick="unfold('span:i466');">FACETS</a> / <a href="#i465" onclick="unfold('span:i465');">INEQUALITIES</a> and the <a href="#i645" onclick="unfold('span:i645');">AFFINE_HULL</a> / <a href="#i461" onclick="unfold('span:i461');">EQUATIONS</a>
 of a polytope <em class="param">P</em> in a readable way.
 <a href="#i472" onclick="unfold('span:i472');">COORDINATE_LABELS</a> are adopted if present.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope&lt;Scalar&gt;</a></td><td class="param">P</td><td><div class="descr"><div>the given polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td>bool</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i18" onclick="swap_content('span:i18'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i18" onclick="swap_content('span:i18'); return false;"><span class="category">Linear optimization</span></a></h3></div><div style="display: inline" id="span:i18" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i147" onclick="swap_content('span:i147'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i147" onclick="swap_content('span:i147'); return false;"><b>dgraph</b></a>
			(P, LP)  

			
				→ Graph&lt;Directed&gt;<div style="display: inline" id="span:i147" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Direct the graph of a polytope <em class="param">P</em> according to a linear or abstract objective function.
 The maximal and minimal values, which are attained by the objective function, as well
 as the minimal and the maximal face are written into separate sections.</p><p> The option <em class="param">inverse</em> directs the graph with decreasing instead of increasing edges.
 If the option <em class="param">generic</em> is set, ties will be broken by lexicographical ordering.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">LP</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">inverse</td><td><div class="descr"><div>inverts the direction</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">generic</td><td><div class="descr"><div>breaks ties</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="graph.html#i12" onclick="unfold('span:i12');">Graph&lt;Directed&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i144" onclick="swap_content('span:i144'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i144" onclick="swap_content('span:i144'); return false;"><b>inner_point</b></a>
			(points)  

			<div style="display: inline" id="span:i144" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute a true inner point of a convex hull of the given set of <em class="param">points</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i145" onclick="swap_content('span:i145'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i145" onclick="swap_content('span:i145'); return false;"><b>random_edge_epl</b></a>
			(G)  

			
				→ Vector&lt;Rational&gt;<div style="display: inline" id="span:i145" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes a vector containing the expected path length to the maximum
 for each vertex of a directed graph <em class="param">G</em>.
 The random edge pivot rule is applied.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="graph.html#i12" onclick="unfold('span:i12');">Graph&lt;Directed&gt;</a></td><td class="param">G</td><td><div class="descr"><div>a directed graph</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Rational&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i146" onclick="swap_content('span:i146'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i146" onclick="swap_content('span:i146'); return false;"><b>rand_aof</b></a>
			(P, start)  

			
				→ Vector&lt;Rational&gt;<div style="display: inline" id="span:i146" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a random abstract objective function on a given <em class="u">simple</em> polytope <em class="param">P</em>.
 It is assumed that the boundary complex of the dual polytope is extendibly shellable.
 If, during the computation, it turns out that a certain partial shelling cannot be extended,
 then this is given instead of an abstract objective function.
 It is possible (but not required) to specify the index of the starting vertex <em class="param">start</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>a <em class="u">simple</em> polytope</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">start</td><td><div class="descr"><div>the index of the starting vertex; default value: random</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome. </div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Rational&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i148" onclick="swap_content('span:i148'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i148" onclick="swap_content('span:i148'); return false;"><b>rel_int_point</b></a>
			(P, unbounded, affine_hull)  

			<div style="display: inline" id="span:i148" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes a relative interior point of a polyhedron <em class="param">P</em> and stores it in <em class="param">P</em>-&gt;<a href="#i474" onclick="unfold('span:i474');">REL_INT_POINT</a>.
 The <em class="param">unbounded</em> flag needs to be set to true if the polyhedron could be unbounded.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">unbounded</td><td><div class="descr"><div>needs to be set to true if <em class="param">P</em> could be unbounded; default value: 0</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">affine_hull</td><td><div class="descr"><div>indicates that the affine hull of <em class="param">P</em> is already computed; default value: 0</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i149" onclick="swap_content('span:i149'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i149" onclick="swap_content('span:i149'); return false;"><b>vertex_colors</b></a>
			(P, LP)  

			
				→ Array&lt;RGB&gt;<div style="display: inline" id="span:i149" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Calculate RGB-color-values for each vertex depending on a linear or abstract objective function.
 Maximal and minimal affine vertices are colored as specified.  Far vertices (= rays) orthogonal
 to the linear function normal vector are white.  The colors for other affine vertices
 are linearly interpolated in the HSV color model.</p><p> If the objective function is linear and the corresponding LP problem is unbounded, then
 the affine vertices that would become optimal after the removal of the rays are painted pale.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">LP</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i135" onclick="unfold('span:i135');">RGB</a></td><td class="param">min</td><td><div class="descr"><div>the minimal RGB value</div></div></td></tr><tr><td><a href="common.html#i135" onclick="unfold('span:i135');">RGB</a></td><td class="param">max</td><td><div class="descr"><div>the maximal RGB value</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;RGB&gt;</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i13" onclick="swap_content('span:i13'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i13" onclick="swap_content('span:i13'); return false;"><span class="category">Metric properties</span></a></h3></div><div style="display: inline" id="span:i13" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i123" onclick="swap_content('span:i123'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i123" onclick="swap_content('span:i123'); return false;"><b>all_steiner_points</b></a>
			(P)  

			
				→ Matrix<div style="display: inline" id="span:i123" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the Steiner points of all faces of a polyhedron <em class="param">P</em> using a
 randomized approximation of the angles.
 <em class="param">P</em> must be <a href="#i557" onclick="unfold('span:i557');">BOUNDED</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td>eps</td><td class="param">controls</td><td><div class="descr"><div>the accuracy of the angles computed</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i124" onclick="swap_content('span:i124'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i124" onclick="swap_content('span:i124'); return false;"><b>integer_points_bbox</b></a>
			(P)  

			
				→ Matrix&lt;Integer&gt;<div style="display: inline" id="span:i124" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Enumerate all integer points in the given polytope by searching a bounding box.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope&lt;Scalar&gt;</a></td><td class="param">P</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix&lt;Integer&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i125" onclick="swap_content('span:i125'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i125" onclick="swap_content('span:i125'); return false;"><b>steiner_point</b></a>
			(P)  

			
				→ Vector<div style="display: inline" id="span:i125" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the Steiner point of a polyhedron <em class="param">P</em> using a randomized
 approximation of the angles.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td>eps</td><td class="param">controls</td><td><div class="descr"><div>the accuracy of the angles computed</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i21" onclick="swap_content('span:i21'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i21" onclick="swap_content('span:i21'); return false;"><span class="category">Optimization</span></a></h3></div><div style="display: inline" id="span:i21" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i153" onclick="swap_content('span:i153'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i153" onclick="swap_content('span:i153'); return false;"><b>core_point_algo</b></a>
			(p, optLPvalue)  

			
				→ perl::ListReturn<div style="display: inline" id="span:i153" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Algorithm to solve highly symmetric integer linear programs (ILP).
 It is required that the group of the ILP induces the alternating or symmetric group
 on the set of coordinate directions.
 The linear objective function is the vector (0,1,1,..,1).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">p</td><td/></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">optLPvalue</td><td><div class="descr"><div>optimal value of LP approximation</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">verbose</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td>perl::ListReturn</td><td><div class="descr"><div>(optimal solution, optimal value) or empty</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i154" onclick="swap_content('span:i154'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i154" onclick="swap_content('span:i154'); return false;"><b>find_transitive_lp_sol</b></a>
			(Inequalities)  

			
				→ perl::ListReturn<div style="display: inline" id="span:i154" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Algorithm to solve symmetric linear programs (LP) of the form
 max c<sup>t</sup>x , c=(0,1,1,..,1)
 subject to the inequality system given by <em class="param">Inequalities</em>.
 It is required that the symmetry group of the LP acts transitively
 on the coordinate directions.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">Inequalities</td><td><div class="descr"><div>the inequalities describing the feasible region</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td>perl::ListReturn</td><td><div class="descr"><div>(optLPsolution,optLPvalue,feasible,max_bounded)</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i29" onclick="swap_content('span:i29'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i29" onclick="swap_content('span:i29'); return false;"><span class="category">Orbits</span></a></h3></div><div style="display: inline" id="span:i29" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i246" onclick="swap_content('span:i246'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i246" onclick="swap_content('span:i246'); return false;"><b>truncated_orbit_polytope</b></a>
			(v, group, eps)  

			
				→ SymmetricPolytope<div style="display: inline" id="span:i246" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Constructs an orbit polytope of a given point <em class="param">v</em> with respect to a given group <em class="param">group</em>, 
 in which all vertices are cut off by hyperplanes in distance <em class="param">eps</em> </p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">v</td><td><div class="descr"><div>point of which orbit polytope is to be constructed </div></div></td></tr><tr><td><a href="group.html#i9" onclick="unfold('span:i9');">group::GroupOfPolytope</a></td><td class="param">group</td><td><div class="descr"><div>group for which orbit polytope is to be constructed</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">eps</td><td><div class="descr"><div>scaled distance by which the vertices of the orbit polytope are to be cut off</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i46" onclick="unfold('span:i46');">SymmetricPolytope</a></td><td><div class="descr"><div>the truncated orbit polytope</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i16" onclick="swap_content('span:i16'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i16" onclick="swap_content('span:i16'); return false;"><span class="category">Other</span></a></h3></div><div style="display: inline" id="span:i16" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i138" onclick="swap_content('span:i138'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i138" onclick="swap_content('span:i138'); return false;"><b>induced_lattice_basis</b></a>
			(p)  

			
				→ Matrix&lt;Integer&gt;<div style="display: inline" id="span:i138" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Returns a basis of the affine lattice spanned by the vertices</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">p</td><td><div class="descr"><div>the input polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix&lt;Integer&gt;</a></td><td><div class="descr"><div>- the lattice basis.</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i140" onclick="swap_content('span:i140'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i140" onclick="swap_content('span:i140'); return false;"><b>is_vertex</b></a>
			(q, points)  

			
				→ Bool<div style="display: inline" id="span:i140" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Checks whether a given point <em class="param">q</em> is a vertex of the polytope P generated by
 <em class="param">q</em> and a set of other points <em class="param">points</em> via solving a suitable LP
 (compare cdd redundancy check). Works without knowing the facets of P!</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">q</td><td><div class="descr"><div>the vertex (candidate) which is to be separated from <em class="param">points</em></div></div></td></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td><div class="descr"><div>the points from which <em class="param">q</em> is to be separated</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td><div class="descr"><div>'true' if <em class="param">q</em> is a vertex</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i139" onclick="swap_content('span:i139'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i139" onclick="swap_content('span:i139'); return false;"><b>minimal_vertex_angle</b></a>
			(P)  

			
				→ Float<div style="display: inline" id="span:i139" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the minimal angle between two vertices of the input polytope <em class="param">P</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i53" onclick="unfold('span:i53');">Float</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i137" onclick="swap_content('span:i137'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i137" onclick="swap_content('span:i137'); return false;"><b>separating_hyperplane</b></a>
			(q, points)  

			
				→ ListReturn<div style="display: inline" id="span:i137" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes (the normal vector of) a hyperplane which separates a given point <em class="param">q</em>
 from <em class="param">points</em> via solving a suitable LP. The scalar product of the normal vector
 of the separating hyperplane and a point in <em class="param">points</em> is greater or equal than 0
 (same behavior as for facets!).
 If <em class="param">q</em> is not a vertex of P=conv(<em class="param">points</em>,<em class="param">q</em>),
 the function returns a zero vector and sets <em class="param">answer</em> to 'false'.
 Works without knowing the facets of P!</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">q</td><td><div class="descr"><div>the vertex (candidate) which is to be separated from <em class="param">points</em></div></div></td></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td><div class="descr"><div>the points from which <em class="param">q</em> is to be separated</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td>ListReturn</td><td><div class="descr"><div>(Bool answer, Vector sep_hyp)</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i8" onclick="swap_content('span:i8'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i8" onclick="swap_content('span:i8'); return false;"><span class="category">Polytope Propagation</span></a></h3></div><div style="display: inline" id="span:i8" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i102" onclick="swap_content('span:i102'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i102" onclick="swap_content('span:i102'); return false;"><b>binary_markov_graph</b></a>
			(observation)  

			
				→ PropagatedPolytope<div style="display: inline" id="span:i102" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Defines a very simple graph for a polytope propagation related to a Hidden Markov Model.
 The propagated polytope is always a polygon.
 For a detailed description see
</p><blockquote><div> M. Joswig: Polytope propagation, in: Algebraic statistics and computational biology</div><div> by L. Pachter and B. Sturmfels (eds.), Cambridge, 2005.</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Bool&gt;</a></td><td class="param">observation</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i45" onclick="unfold('span:i45');">PropagatedPolytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i290" onclick="swap_content('span:i290'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i290" onclick="swap_content('span:i290'); return false;"><b>binary_markov_graph</b></a>
			(observation)  

			<div style="display: inline" id="span:i290" class="foldit"><br/><div class="descr_func"/><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">observation</td><td><div class="descr"><div>encoded as a string of "0" and "1".</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i23" onclick="swap_content('span:i23'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i23" onclick="swap_content('span:i23'); return false;"><span class="category">Producing a new polyhedron from others</span></a></h3></div><div style="display: inline" id="span:i23" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i192" onclick="swap_content('span:i192'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i192" onclick="swap_content('span:i192'); return false;"><b>bipyramid</b></a>
			(P, z, z_prime)  

			<div style="display: inline" id="span:i192" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make a bipyramid over a pointed polyhedron.
 The bipyramid is the convex hull of the input polyhedron <em class="param">P</em>
 and two points (<em class="param">v</em>, <em class="param">z</em>), (<em class="param">v</em>, <em class="param">z_prime</em>)
 on both sides of the affine span of <em class="param">P</em>. For bounded polyhedra, the apex projections
 <em class="param">v</em> to the affine span of <em class="param">P</em> coincide with the vertex barycenter of <em class="param">P</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z</td><td><div class="descr"><div>distance between the vertex barycenter and the first apex,
  default value is 1.</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z_prime</td><td><div class="descr"><div>distance between the vertex barycenter and the second apex,
  default value is -<em class="param">z</em>.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>: don't compute the coordinates, purely combinatorial description is produced.</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>copy the vertex labels from the original polytope,
  label the new vertices with "Apex" and "Apex'".</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i220" onclick="swap_content('span:i220'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i220" onclick="swap_content('span:i220'); return false;"><b>blending</b></a>
			(P1, v1, P2, v2)  

			
				→ Polytope<div style="display: inline" id="span:i220" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the blending of two polyhedra at simple vertices.
 This is a slightly less standard construction.
 A vertex is <em class="u">simple</em> if its vertex figure is a simplex.</p><p> Moving a vertex <em class="param">v</em> of a bounded polytope to infinity yields an unbounded polyhedron
 with all edges through <em class="param">v</em> becoming mutually parallel rays.  Do this to both
 input polytopes <em class="param">P1</em> and <em class="param">P2</em> at simple vertices <em class="param">v1</em> and <em class="param">v2</em>, respectively.
 Up to an affine transformation one can assume that the orthogonal projections
 of <em class="param">P1</em> and <em class="param">P2</em> in direction <em class="param">v1</em> and <em class="param">v2</em>, respectively, are mutually congruent.</p><p> Any bijection b from the set of edges through <em class="param">v1</em> to the edges through <em class="param">v2</em>
 uniquely defines a way of glueing the unbounded polyhedra to obtain a new bounded
 polytope, the <em class="u">blending</em> with respect to b. The bijection is specified as a <em class="param">permutation</em>
 of indices 0 1 2 etc. The default permutation is the identity.</p><p> The number of vertices of the blending is the sum of the numbers of vertices of the
 input polytopes minus 2.  The number of facets is the sum of the numbers of facets
 of the input polytopes minus the dimension.</p><p> The resulting polytope is described only combinatorially.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">v1</td><td><div class="descr"><div>the index of the first vertex</div></div></td></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">v2</td><td><div class="descr"><div>the index of the second vertex</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Int&gt;</a></td><td class="param">permutation</td><td/></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>copy vertex labels from the original polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i206" onclick="swap_content('span:i206'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i206" onclick="swap_content('span:i206'); return false;"><b>cayley_embedding</b></a>
			(P, P_prime, z, z_prime)  

			
				→ Polytope<div style="display: inline" id="span:i206" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Create a Cayley embedding of two polytopes (one of them must be pointed).
 The vertices of the first polytope <em class="param">P</em> get an extra coordinate <em class="param">z</em>
 and the vertices of the second polytope <em class="param">P_prime</em> get <em class="param">z_prime</em>.</p><p> Default values are <em class="param">z</em>=1 and <em class="param">z_prime</em>=-<em class="param">z</em>.</p><p> The option <em class="param">relabel</em> creates an additional section <a href="#i558" onclick="unfold('span:i558');">VERTEX_LABELS</a>.
 The vertices of <em class="param">P</em> inherit the original labels unchanged;
 the vertex labels of <em class="param">P_prime</em> get a tick (') appended.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>the first polytope</div></div></td></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P_prime</td><td><div class="descr"><div>the second polytope</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z</td><td><div class="descr"><div>the extra coordinate for the vertices of <em class="param">P</em></div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z_prime</td><td><div class="descr"><div>the extra coordinate for the vertices of <em class="param">P_prime</em></div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i188" onclick="swap_content('span:i188'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i188" onclick="swap_content('span:i188'); return false;"><b>cayley_polytope</b></a>
			(P_Array)  

			
				→ Polytope<div style="display: inline" id="span:i188" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Construct the cayley polytope of a set of pointed lattice polytopes contained in <em class="param">P_Array</em>
 which is the convex hull of P<sub>1</sub>×e<sub>1</sub>, ..., P<sub>k</sub>×e<sub>k</sub>
 where e<sub>1</sub>, ...,e<sub>k</sub> are the standard unit vectors in R<sup>k</sup>.
 In this representation the last k coordinates always add up to 1.
 The option <em class="param">proj</em> projects onto the complement of the last coordinate.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;LatticePolytope&gt;</a></td><td class="param">P_Array</td><td><div class="descr"><div>an array containing the lattice polytopes P<sub>1</sub>,...,P<sub>k</sub></div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">proj</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i216" onclick="swap_content('span:i216'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i216" onclick="swap_content('span:i216'); return false;"><b>cells_from_subdivision</b></a>
			(P, cells)  

			
				→ Polytope<div style="display: inline" id="span:i216" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Extract the given <em class="param">cells</em> of the subdivision of a polyhedron and write their union
 as a new polyhedron.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td class="param">cells</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>copy the vertex labels from the original polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i211" onclick="swap_content('span:i211'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i211" onclick="swap_content('span:i211'); return false;"><b>cell_from_subdivision</b></a>
			(P, cell)  

			
				→ Polytope<div style="display: inline" id="span:i211" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Extract the given <em class="param">cell</em> of the subdivision of a polyhedron and write it as a new polyhedron.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">cell</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>copy the vertex labels from the original polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i187" onclick="swap_content('span:i187'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i187" onclick="swap_content('span:i187'); return false;"><b>conv</b></a>
			(P_Array)  

			
				→ PropagatedPolytope<div style="display: inline" id="span:i187" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Construct a new polyhedron as the convex hull of the polyhedra
 given in <em class="param">P_Array</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Polytope&gt;</a></td><td class="param">P_Array</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i45" onclick="unfold('span:i45');">PropagatedPolytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i193" onclick="swap_content('span:i193'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i193" onclick="swap_content('span:i193'); return false;"><b>edge_middle</b></a>
			(P)  

			
				→ Polytope<div style="display: inline" id="span:i193" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce the convex hull of all edge middle points of some polytope <em class="param">P</em>.
 The polytope must be <a href="#i557" onclick="unfold('span:i557');">BOUNDED</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i204" onclick="swap_content('span:i204'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i204" onclick="swap_content('span:i204'); return false;"><b>facet</b></a>
			(P, facet)  

			
				→ Cone<div style="display: inline" id="span:i204" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Extract the given <em class="param">facet</em> of a polyhedron and write it as a new polyhedron.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">facet</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>don't copy the coordinates, produce purely combinatorial description.</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>copy the vertex labels from the original polytope.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i213" onclick="swap_content('span:i213'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i213" onclick="swap_content('span:i213'); return false;"><b>facet_to_infinity</b></a>
			(i)  

			
				→ Polytope<div style="display: inline" id="span:i213" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make an affine transformation such that the i-th facet is transformed to infinity</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">i</td><td><div class="descr"><div>the facet index</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i194" onclick="swap_content('span:i194'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i194" onclick="swap_content('span:i194'); return false;"><b>intersection</b></a>
			(C ...)  

			
				→ Cone<div style="display: inline" id="span:i194" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Construct a new polyhedron or cone as the intersection of given polyhedra and/or cones.
 Works only if all <a href="#i500" onclick="unfold('span:i500');">CONE_AMBIENT_DIM</a> values are equal.
 If the input contains both cones and polytopes, the output will be a polytope.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td class="param">C ...</td><td><div class="descr"><div>polyhedra and cones to be intersected</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i190" onclick="swap_content('span:i190'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i190" onclick="swap_content('span:i190'); return false;"><b>join_polytopes</b></a>
			(P1, P2)  

			
				→ Polytope<div style="display: inline" id="span:i190" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Construct a new polyhedron as the join of two given pointed ones.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i200" onclick="swap_content('span:i200'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i200" onclick="swap_content('span:i200'); return false;"><b>lattice_bipyramid</b></a>
			(P, v, v_prime, z, z_prime)  

			
				→ Polytope<div style="display: inline" id="span:i200" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make a lattice bipyramid over a polyhedron.
 The bipyramid is the convex hull of the input polyhedron <em class="param">P</em>
 and two points (<em class="param">v</em>, <em class="param">z</em>), (<em class="param">v_prime</em>, <em class="param">z_prime</em>)
 on both sides of the affine span of <em class="param">P</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">v</td><td><div class="descr"><div>basis point for the first apex</div></div></td></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">v_prime</td><td><div class="descr"><div>basis for the second apex
  If <em class="param">v_prime</em> is omitted, <em class="param">v</em> will be used for both apices.
  If both <em class="param">v</em> and <em class="param">v_prime</em> are omitted, it tries to find two vertices which don't lie in a common facet.
  If no such vertices can be found or <em class="param">P</em> is a simplex, it uses an interior lattice point as
  both <em class="param">v</em> and <em class="param">v_prime</em>.</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z</td><td><div class="descr"><div>height for the first apex, default value is 1</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z_prime</td><td><div class="descr"><div>height for the second apex, default value is -<em class="param">z</em></div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>copy the vertex labels from the original polytope,
 label the new vertices with "Apex" and "Apex'".</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i210" onclick="swap_content('span:i210'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i210" onclick="swap_content('span:i210'); return false;"><b>lattice_pyramid</b></a>
			(P, z, v)  

			
				→ Polytope<div style="display: inline" id="span:i210" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make a lattice pyramid over a polyhedron.
 The pyramid is the convex hull of the input polyhedron <em class="param">P</em> and a point <em class="param">v</em>
 outside the affine span of <em class="param">P</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z</td><td><div class="descr"><div>the height for the apex (<em class="param">v</em>,<em class="param">z</em>), default value is 1.</div></div></td></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">v</td><td><div class="descr"><div>the lattice point to use as apex, default is the first vertex of <em class="param">P</em>.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>copy the original vertex labels,
   label the new top vertex with "Apex".</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i221" onclick="swap_content('span:i221'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i221" onclick="swap_content('span:i221'); return false;"><b>mapping_polytope</b></a>
			(P1, P2)  

			
				→ Polytope<div style="display: inline" id="span:i221" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Construct a new polytope as the <em class="u">mapping polytope</em> of two polytopes <em class="param">P1</em> and <em class="param">P2</em>.
 The mapping polytope is the set of all affine maps from R<sup>p</sup> to R<sup>q</sup>, that map <em class="param">P1</em> into <em class="param">P2</em>.</p><p> The label of a new facet corresponding to v<sub>1</sub> and h<sub>1</sub> will have the form
 "v<sub>1</sub>*h<sub>1</sub>".</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i215" onclick="swap_content('span:i215'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i215" onclick="swap_content('span:i215'); return false;"><b>minkowski_sum</b></a>
			(lambda, P1, mu, P2)  

			
				→ Polytope<div style="display: inline" id="span:i215" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produces the polytope <em class="param">lambda</em>*<em class="param">P1</em>+<em class="param">mu</em>*<em class="param">P2</em>, where * and + are scalar multiplication
 and Minkowski addition, respectively.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>Scalar</td><td class="param">lambda</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td>Scalar</td><td class="param">mu</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i298" onclick="swap_content('span:i298'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i298" onclick="swap_content('span:i298'); return false;"><b>minkowski_sum</b></a>
			(P1, P2)  

			
				→ Polytope<div style="display: inline" id="span:i298" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produces the Minkowski sum of <em class="param">P1</em> and <em class="param">P2</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i203" onclick="swap_content('span:i203'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i203" onclick="swap_content('span:i203'); return false;"><b>minkowski_sum_fukuda</b></a>
			()  

			<div style="display: inline" id="span:i203" class="foldit"><br/><div class="descr_func"><div class="undoc">UNDOCUMENTED</div></div><div class="level3"/></div></div></div></li><li><div class="li"><div class="icon" id="icon:i214" onclick="swap_content('span:i214'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i214" onclick="swap_content('span:i214'); return false;"><b>pointed_part</b></a>
			(P)  

			
				→ Polytope<div style="display: inline" id="span:i214" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produces the pointed part of a polyhedron</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i219" onclick="swap_content('span:i219'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i219" onclick="swap_content('span:i219'); return false;"><b>prism</b></a>
			(P, z1, z2)  

			
				→ Polytope<div style="display: inline" id="span:i219" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make a prism over a pointed polyhedron.
 The prism is the product of the input polytope <em class="param">P</em> and the interval [<em class="param">z1</em>, <em class="param">z2</em>].</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>the input polytope</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z1</td><td><div class="descr"><div>the left endpoint of the interval; default value: -1</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z2</td><td><div class="descr"><div>the right endpoint of the interval; default value: -<em class="param">z1</em></div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>only combinatorial information is handled</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>creates an additional section <a href="#i558" onclick="unfold('span:i558');">VERTEX_LABELS</a>;
   the bottom facet vertices get the labels from the original polytope;
   the labels of their clones in the top facet get a tick (') appended.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i217" onclick="swap_content('span:i217'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i217" onclick="swap_content('span:i217'); return false;"><b>product</b></a>
			(P1, P2)  

			
				→ Polytope<div style="display: inline" id="span:i217" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Construct a new polytope as the product of two given polytopes <em class="param">P1</em> and <em class="param">P2</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>only combinatorial information is handled</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>creates an additional section <a href="#i558" onclick="unfold('span:i558');">VERTEX_LABELS</a>;
   the label of a new vertex corresponding to v<sub>1</sub> ⊕ v<sub>2</sub> will
   have the form LABEL_1*LABEL_2.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i196" onclick="swap_content('span:i196'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i196" onclick="swap_content('span:i196'); return false;"><b>projection</b></a>
			(P, indices)  

			
				→ Polytope<div style="display: inline" id="span:i196" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Orthogonally project a pointed polyhedron to a coordinate subspace.</p><p> The subspace the polyhedron <em class="param">P</em> is projected on is given by the coordinate indices in the set <em class="param">indices</em>.
 The option <em class="param">revert</em> inverts the coordinate list.
 The client scans for all coordinate sections and produces proper output from each.
 If a description in terms of inequalities is found, the client performs Fourier-Motzkin elimination
 unless the <em class="param">nofm</em> option is set.  Setting the <em class="param">nofm</em> option is useful if the corank of the projection
 is large; in this case the number of inequalities produced grows quickly.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Int&gt;</a></td><td class="param">indices</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">revert</td><td><div class="descr"><div>inverts the coordinate list</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">nofm</td><td><div class="descr"><div>suppresses Fourier-Motzkin elimination</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i218" onclick="swap_content('span:i218'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i218" onclick="swap_content('span:i218'); return false;"><b>projection_full</b></a>
			(P)  

			
				→ Polytope<div style="display: inline" id="span:i218" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Orthogonally project a polyhedron to a coordinate subspace such that "redundant" columns are omitted,
 i.e., the projection becomes full-dimensional without changing the combinatorial type.
 The client scans for all coordinate sections and produces proper output from each.
 If a description in terms of inequalities is found, the client performs Fourier-Motzkin elimination
 unless the <em class="param">nofm</em> option is set.  Setting the <em class="param">nofm</em> option is useful if the corank of the projection
 is large; in this case the number of inequalities produced grows quickly.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">nofm</td><td><div class="descr"><div>suppresses Fourier-Motzkin elimination</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i209" onclick="swap_content('span:i209'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i209" onclick="swap_content('span:i209'); return false;"><b>pyramid</b></a>
			(P, z)  

			
				→ Polytope<div style="display: inline" id="span:i209" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make a pyramid over a polyhedron.
 The pyramid is the convex hull of the input polyhedron <em class="param">P</em> and a point <em class="param">v</em>
 outside the affine span of <em class="param">P</em>. For bounded polyhedra, the projection of <em class="param">v</em>
 to the affine span of <em class="param">P</em> coincides with the vertex barycenter of <em class="param">P</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z</td><td><div class="descr"><div>is the distance between the vertex barycenter and <em class="param">v</em>,
   default value is 1.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>don't compute new coordinates, produce purely combinatorial description.</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>copy vertex labels from the original polytope,
   label the new top vertex with "Apex".</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i197" onclick="swap_content('span:i197'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i197" onclick="swap_content('span:i197'); return false;"><b>rand_inner_points</b></a>
			(P, n)  

			
				→ Polytope<div style="display: inline" id="span:i197" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a polytope with <em class="param">n</em> random points from the input polytope <em class="param">P</em>.
 Each generated point is a convex linear combination of the input vertices
 with uniformly distributed random coefficients. Thus, the output points can't in general
 be expected to be distributed uniformly within the input polytope; cf. <a href="#i189" onclick="unfold('span:i189');">unirand</a> for this.
 The polytope must be <a href="#i557" onclick="unfold('span:i557');">BOUNDED</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>the input polytope</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of random points</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i198" onclick="swap_content('span:i198'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i198" onclick="swap_content('span:i198'); return false;"><b>rand_vert</b></a>
			(V, n)  

			
				→ Matrix<div style="display: inline" id="span:i198" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Selects <em class="param">n</em> random vertices from the set of vertices <em class="param">V</em>.
 This can be used to produce random polytopes which are neither simple nor simplicial as follows:
 First produce a simple polytope (for instance at random, by using rand_sphere, rand, or unirand).
 Then use this client to choose among the vertices at random.
 Generalizes random 0/1-polytopes.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">V</td><td><div class="descr"><div>the vertices of a polytope</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of random points</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i212" onclick="swap_content('span:i212'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i212" onclick="swap_content('span:i212'); return false;"><b>spherize</b></a>
			(P)  

			
				→ Polytope<div style="display: inline" id="span:i212" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Project all vertices of a polyhedron <em class="param">P</em> on the unit sphere.
 <em class="param">P</em> must be <a href="#i561" onclick="unfold('span:i561');">CENTERED</a> and <a href="#i557" onclick="unfold('span:i557');">BOUNDED</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i201" onclick="swap_content('span:i201'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i201" onclick="swap_content('span:i201'); return false;"><b>stack</b></a>
			(P, stack_facets)  

			
				→ Polytope<div style="display: inline" id="span:i201" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Stack a (simplicial or cubical) polytope over one or more of its facets.</p><p> For each facet of the polytope <em class="param">P</em> specified in <em class="param">stack_facets</em>, the barycenter of its vertices
 is lifted along the normal vector of the facet.
 In the simplicial case, this point is directly added to the vertex set, thus building a pyramid over
 the facet. In the cubical case, this pyramid is truncated by a hyperplane parallel to the original facet
 at its half height. This way, the property of being simplicial or cubical is preserved in both cases.</p><p> The option <em class="param">lift</em> controls the exact coordinates of the new vertices.
 It should be a rational number between 0 and 1, which expresses the ratio of the distance between the
 new vertex and the stacked facet, to the maximal possible distance. When <em class="param">lift</em>=0, the new vertex would lie
 on the original facet. <em class="param">lift</em>=1 corresponds to the opposite extremal case, where the new vertex
 hit the hyperplane of some neighbor facet. As an additional restriction, the new vertex can't
 lie further from the facet as the vertex barycenter of the whole polytope.
 Alternatively, the option <em class="param">noc</em> (no coordinates) can be specified to produce a
 pure combinatorial description of the resulting polytope.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td class="param">stack_facets</td><td><div class="descr"><div>the facets to be stacked;
   A single facet to be stacked is specified by its number.
   Several facets can be passed in a Set or in an anonymous array of indices: [n1,n2,...]
   Special keyword <em class="u">All</em> means that all factes are to be stacked.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">lift</td><td><div class="descr"><div>controls the exact coordinates of the new vertices;
   rational number between 0 and 1; default value: 1/2</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>produces a pure combinatorial description (in contrast to <em class="param">lift</em>)</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>creates an additional section <a href="#i558" onclick="unfold('span:i558');">VERTEX_LABELS</a>;
   New vertices get labels 'f(FACET_LABEL)' in the simplicial case,
   and 'f(FACET_LABEL)-NEIGHBOR_VERTEX_LABEL' in the cubical case.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i202" onclick="swap_content('span:i202'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i202" onclick="swap_content('span:i202'); return false;"><b>stellar_all_faces</b></a>
			(P, d)  

			
				→ Polytope<div style="display: inline" id="span:i202" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Perform a stellar subdivision of all proper faces, starting with the facets.</p><p> Parameter <em class="param">d</em> specifies the lowest dimension of the faces to be divided.
 It can also be negative, then treated as the co-dimension.
 Default is 1, that is, the edges of the polytope.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>, must be bounded</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the lowest dimension of the faces to be divided;
   negative values: treated as the co-dimension; default value: 1.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i199" onclick="swap_content('span:i199'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i199" onclick="swap_content('span:i199'); return false;"><b>stellar_indep_faces</b></a>
			(P, in_faces)  

			
				→ Polytope<div style="display: inline" id="span:i199" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Perform a stellar subdivision of the faces <em class="param">in_faces</em> of a polyhedron <em class="param">P</em>.</p><p> The faces must have the following property:
 The open vertex stars of any pair of faces must be disjoint.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>, must be bounded</div></div></td></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td class="param">in_faces</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i205" onclick="swap_content('span:i205'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i205" onclick="swap_content('span:i205'); return false;"><b>tensor</b></a>
			(P1, P2)  

			
				→ Polytope<div style="display: inline" id="span:i205" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Construct a new polytope as the convex hull of the tensor products of the vertices of two
 polytopes <em class="param">P1</em> and <em class="param">P2</em>.
 Unbounded polyhedra are not allowed. Does depend on the vertex coordinates of the input.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i207" onclick="swap_content('span:i207'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i207" onclick="swap_content('span:i207'); return false;"><b>truncation</b></a>
			(P, trunc_vertices)  

			
				→ Polytope<div style="display: inline" id="span:i207" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Cut off one or more vertices of a polyhedron.</p><p> The exact location of the cutting hyperplane(s) can be controlled by the
 option <em class="param">cutoff</em>, a rational number between 0 and 1.
 When <em class="param">cutoff</em>=0, the hyperplane would go through the chosen vertex, thus cutting off nothing.
 When <em class="param">cutoff</em>=1, the hyperplane touches the nearest neighbor vertex of a polyhedron.</p><p> Alternatively, the option <em class="param">noc</em> (no coordinates) can be specified to produce a
 pure combinatorial description of the resulting polytope, which corresponds to
 the cutoff factor 1/2.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td class="param">trunc_vertices</td><td><div class="descr"><div>the vertex/vertices to be cut off;
   A single vertex to be cut off is specified by its number.
   Several vertices can be passed in a Set or in an anonymous array of indices: [n1,n2,...]
   Special keyword <em class="u">All</em> means that all vertices are to be cut off.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">cutoff</td><td><div class="descr"><div>controls the exact location of the cutting hyperplane(s);
   rational number between 0 and 1; default value: 1/2</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>produces a pure combinatorial description (in contrast to <em class="param">cutoff</em>)</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>creates an additional section <a href="#i558" onclick="unfold('span:i558');">VERTEX_LABELS</a>;
   New vertices get labels of the form 'LABEL1-LABEL2', where LABEL1 is the original label
   of the truncated vertex, and LABEL2 is the original label of its neighbor.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i189" onclick="swap_content('span:i189'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i189" onclick="swap_content('span:i189'); return false;"><b>unirand</b></a>
			(Polytope, n)  

			
				→ Polytope<div style="display: inline" id="span:i189" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a polytope with <em class="param">n</em> random points that are
 uniformly distributed within the given polytope <em class="param">P</em>.
 <em class="param">P</em> must be bounded and full-dimensional.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>P</td><td class="param">Polytope</td><td/></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of random points</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">boundary</td><td><div class="descr"><div>forces the points to lie on the boundary of the given polytope</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i195" onclick="swap_content('span:i195'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i195" onclick="swap_content('span:i195'); return false;"><b>vertex_figure</b></a>
			(p, n)  

			
				→ Polytope<div style="display: inline" id="span:i195" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Construct the vertex figure of the vertex <em class="param">n</em> of a polyhedron.
 The vertex figure is dual to a facet of the dual polytope.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">p</td><td/></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>number of the chosen vertex</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">cutoff</td><td><div class="descr"><div>controls the exact location of the cutting hyperplane.
   It should lie between 0 and 1.
   Value 0 would let the hyperplane go through the chosen vertex,
   thus degenerating the vertex figure to a single point.
   Value 1 would let the hyperplane touch the nearest neighbor vertex of a polyhedron.
   Default value is 1/2.</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>skip the coordinates computation, producing a pure combinatorial description.</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>inherit vertex labels from the corresponding neighbor vertices of the original polytope.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i208" onclick="swap_content('span:i208'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i208" onclick="swap_content('span:i208'); return false;"><b>wedge</b></a>
			(P, facet, z, z_prime)  

			
				→ Polytope<div style="display: inline" id="span:i208" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make a wedge from a polytope over the given <em class="param">facet</em>.  The polytope must be bounded.
 The inclination of the bottom and top side facet is controlled by <em class="param">z</em> and <em class="param">z_prime</em>,
 which are heights of the projection of the old vertex barycenter
 on the bottom and top side facet respectively.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>, must be bounded</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">facet</td><td><div class="descr"><div>the `cutting edge'.</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z</td><td><div class="descr"><div>default value is 0.</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">z_prime</td><td><div class="descr"><div>default value is -<em class="param">z</em>, or 1 if <em class="param">z</em>==0.</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>don't compute coordinates, pure combinatorial description is produced.</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>create vertex labels:
  The bottom facet vertices obtain the labels from the original polytope;
  the labels of their clones in the top facet get a tick (') appended.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i191" onclick="swap_content('span:i191'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i191" onclick="swap_content('span:i191'); return false;"><b>wreath</b></a>
			(P1, P2)  

			
				→ Polytope<div style="display: inline" id="span:i191" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Construct a new polytope as the wreath product of two input polytopes <em class="param">P1</em>, <em class="param">P2</em>.
 <em class="param">P1</em> and <em class="param">P2</em> have to be <a href="#i557" onclick="unfold('span:i557');">BOUNDED</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P2</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">dual</td><td><div class="descr"><div>invokes the computation of the dual wreath product</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">relabel</td><td><div class="descr"><div>creates an additional section <a href="#i558" onclick="unfold('span:i558');">VERTEX_LABELS</a>;
   the label of a new vertex corresponding to v<sub>1</sub> ⊕ v<sub>2</sub> will
   have the form LABEL_1*LABEL_2.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i7" onclick="swap_content('span:i7'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i7" onclick="swap_content('span:i7'); return false;"><span class="category">Producing from given data</span></a></h3></div><div style="display: inline" id="span:i7" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i101" onclick="swap_content('span:i101'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i101" onclick="swap_content('span:i101'); return false;"><b>zonotope</b></a>
			(zones)  

			
				→ Matrix<div style="display: inline" id="span:i101" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce the points of a zonotope from the vectors given in <em class="param">zones</em>.
 The zonotope is obtained as the iterated Minkowski sum of all intervals [-x,x],
 where x ranges over the rows of a given matrix.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">zones</td><td><div class="descr"><div>the input vectors</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i17" onclick="swap_content('span:i17'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i17" onclick="swap_content('span:i17'); return false;"><span class="category">Producing from other</span></a></h3></div><div style="display: inline" id="span:i17" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i142" onclick="swap_content('span:i142'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i142" onclick="swap_content('span:i142'); return false;"><b>cut_polytope</b></a>
			(G)  

			
				→ Polytope<div style="display: inline" id="span:i142" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Cut polytope of an undirected graph.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="graph.html#i13" onclick="unfold('span:i13');">Graph</a></td><td class="param">G</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i143" onclick="swap_content('span:i143'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i143" onclick="swap_content('span:i143'); return false;"><b>matching_polytope</b></a>
			(G)  

			
				→ Polytope<div style="display: inline" id="span:i143" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Matching polytope of an undirected graph.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="graph.html#i13" onclick="unfold('span:i13');">Graph</a></td><td class="param">G</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i141" onclick="swap_content('span:i141'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i141" onclick="swap_content('span:i141'); return false;"><b>tutte_lifting</b></a>
			(G)  

			
				→ Polytope<div style="display: inline" id="span:i141" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Let <em class="param">G</em> be a 3-connected planar graph. If the corresponding polytope
 contains a triangular facet (ie. the graph contains a non-
 separating cycle of length 3), the client produces a realization
 in R<sup>3</sup>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="graph.html#i13" onclick="unfold('span:i13');">Graph</a></td><td class="param">G</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i22" onclick="swap_content('span:i22'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i22" onclick="swap_content('span:i22'); return false;"><span class="category">Producing from scratch</span></a></h3></div><div style="display: inline" id="span:i22" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i172" onclick="swap_content('span:i172'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i172" onclick="swap_content('span:i172'); return false;"><b>associahedron</b></a>
			(d)  

			
				→ Polytope<div style="display: inline" id="span:i172" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional associahedron (or Stasheff polytope).
 We use the facet description given in Ziegler's book on polytopes, section 9.2.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i175" onclick="swap_content('span:i175'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i175" onclick="swap_content('span:i175'); return false;"><b>birkhoff</b></a>
			(n, even)  

			
				→ Polytope<div style="display: inline" id="span:i175" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Constructs the Birkhoff polytope of dimension <em class="param">n</em><sup>2</sup> (also called the
 assignment polytope, the polytope of doubly stochastic matrices, or the perfect matching polytope).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td/></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">even</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i169" onclick="swap_content('span:i169'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i169" onclick="swap_content('span:i169'); return false;"><b>create_24_cell</b></a>
			()  

			
				→ Polytope<div style="display: inline" id="span:i169" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Create the 24-cell polytope.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i179" onclick="swap_content('span:i179'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i179" onclick="swap_content('span:i179'); return false;"><b>create_600_cell</b></a>
			()  

			
				→ Polytope<div style="display: inline" id="span:i179" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Create the 600-cell polytope.
 Cf. Coxeter, Introduction to Geometry, pp 403-404.</p></div></div><div class="level3"><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i156" onclick="swap_content('span:i156'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i156" onclick="swap_content('span:i156'); return false;"><b>cross</b></a>
			(d, scale)  

			
				→ Polytope<div style="display: inline" id="span:i156" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional cross polytope.
 Regular polytope corresponding to the Coxeter group of type B<sub><em class="param">d</em>-1</sub> = C<sub><em class="param">d</em>-1</sub>.</p><p> All coordinates are +/- <em class="param">scale</em> or 0.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">scale</td><td><div class="descr"><div>Needs to be positive. The default value is 1.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i162" onclick="swap_content('span:i162'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i162" onclick="swap_content('span:i162'); return false;"><b>cube</b></a>
			(d, x_up, x_low)  

			
				→ Polytope<div style="display: inline" id="span:i162" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional cube.
 Regular polytope corresponding to the Coxeter group of type B<sub><em class="param">d</em>-1</sub> = C<sub><em class="param">d</em>-1</sub>.</p><p> The bounding hyperplanes are x<sub>i</sub> &lt;= <em class="param">x_up</em> and x<sub>i</sub> &gt;= <em class="param">x_low</em>.
 Default values: <em class="param">x_up</em>=1, <em class="param">x_low</em>=-<em class="param">x_up</em> or 1 if <em class="param">x_up</em>==0.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">x_up</td><td/></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">x_low</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i181" onclick="swap_content('span:i181'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i181" onclick="swap_content('span:i181'); return false;"><b>cyclic</b></a>
			(d, n, start)  

			
				→ Polytope<div style="display: inline" id="span:i181" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional cyclic polytope with <em class="param">n</em> points.
 Prototypical example of a neighborly polytope.  Combinatorics completely known
 due to Gale's evenness criterion.  Coordinates are chosen on the moment curve
 at integer steps from <em class="param">start</em>, or 0 if not specified.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of points</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">start</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i167" onclick="swap_content('span:i167'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i167" onclick="swap_content('span:i167'); return false;"><b>cyclic_caratheodory</b></a>
			(d, n)  

			
				→ Polytope<div style="display: inline" id="span:i167" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional cyclic polytope with <em class="param">n</em> points.
 Prototypical example of a neighborly polytope.  Combinatorics completely known
 due to Gale's evenness criterion.  Coordinates are chosen on the trigonometric
 moment curve.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of points</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i185" onclick="swap_content('span:i185'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i185" onclick="swap_content('span:i185'); return false;"><b>dwarfed_cube</b></a>
			(d)  

			
				→ Polytope<div style="display: inline" id="span:i185" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional dwarfed cube.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i183" onclick="swap_content('span:i183'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i183" onclick="swap_content('span:i183'); return false;"><b>dwarfed_product_polygons</b></a>
			(d, s)  

			
				→ Polytope<div style="display: inline" id="span:i183" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional dwarfed product of polygons of size <em class="param">s</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">s</td><td><div class="descr"><div>the size</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i163" onclick="swap_content('span:i163'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i163" onclick="swap_content('span:i163'); return false;"><b>goldfarb</b></a>
			(d, e, g)  

			
				→ Polytope<div style="display: inline" id="span:i163" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produces a <em class="param">d</em>-dimensional Goldfarb cube if <em class="param">e</em>&lt;1/2 and <em class="param">g</em>&lt;=e/4.
 The Goldfarb cube is a combinatorial cube and yields a bad example
 for the Simplex Algorithm using the Shadow Vertex Pivoting Strategy.
 Here we use the description as a deformed product due to Amenta and Ziegler.
 For <em class="param">e</em>&lt;1/2 and <em class="param">g</em>=0 we obtain the Klee-Minty cubes.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">e</td><td/></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">g</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i160" onclick="swap_content('span:i160'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i160" onclick="swap_content('span:i160'); return false;"><b>hypersimplex</b></a>
			(k, d)  

			
				→ Polytope<div style="display: inline" id="span:i160" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce the hypersimplex Δ(<em class="param">k</em>,<em class="param">d</em>), that is the the convex hull of all 0/1-vector in R<sup><em class="param">d</em></sup>
 with exactly <em class="param">k</em> 1s.
 Note that the output is never full-dimensional.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">k</td><td><div class="descr"><div>number of 1s</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>ambient dimension</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i170" onclick="swap_content('span:i170'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i170" onclick="swap_content('span:i170'); return false;"><b>hypertruncated_cube</b></a>
			(d, k, lambda)  

			
				→ Polytope<div style="display: inline" id="span:i170" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional hypertruncated cube.
 With symmetric linear objective function (0,1,1,...,1).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">k</td><td><div class="descr"><div>cutoff parameter</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">lambda</td><td><div class="descr"><div>scaling of extra vertex</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i157" onclick="swap_content('span:i157'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i157" onclick="swap_content('span:i157'); return false;"><b>knapsack</b></a>
			(b)  

			
				→ Polytope<div style="display: inline" id="span:i157" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a knapsack polytope defined by one linear inequality (and non-negativity constraints).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Rational&gt;</a></td><td class="param">b</td><td><div class="descr"><div>linear inequality</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i158" onclick="swap_content('span:i158'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i158" onclick="swap_content('span:i158'); return false;"><b>k_cyclic</b></a>
			(n, s)  

			
				→ Polytope<div style="display: inline" id="span:i158" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a (rounded) 2*k-dimensional k-cyclic polytope with <em class="param">n</em> points,
 where k is the length of the input vector <em class="param">s</em>.
 Special cases are the bicyclic (k=2) and tricyclic (k=3) polytopes.
 Only possible in even dimensions.</p><p> The parameters s_i can be specified as integer, 
 floating-point, or rational numbers.
 The coordinates of the i-th point are taken as follows:
</p><blockquote><div> cos(s_1 * 2πi/n),</div><div> sin(s_1 * 2πi/n),</div><div> ...</div><div> cos(s_k * 2πi/n),</div><div> sin(s_k * 2πi/n)</div></blockquote><p>
 Warning: Some of the k-cyclic polytopes are not simplicial.
 Since the components are rounded, this function might output a polytope
 which is not a k-cyclic polytope!</p><p> More information can be found in the following references:
</p><blockquote><div> P. Schuchert: "Matroid-Polytope und Einbettungen kombinatorischer Mannigfaltigkeiten",</div><div> PhD thesis, TU Darmstadt, 1995.</div></blockquote><blockquote><div> Z. Smilansky: "Bi-cyclic 4-polytopes",</div><div> Isr. J. Math. 70, 1990, 82-92</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td/></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">s</td><td><div class="descr"><div>s=(s_1,...,s_k)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i178" onclick="swap_content('span:i178'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i178" onclick="swap_content('span:i178'); return false;"><b>max_GC_rank</b></a>
			(d)  

			
				→ Polytope<div style="display: inline" id="span:i178" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional polytope of maximal Gomory-Chvatal rank Omega(d/log(d)),
 integrally infeasible.
 With symmetric linear objective function (0,1,1..,1).
 Construction due to Pokutta and Schulz.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i161" onclick="swap_content('span:i161'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i161" onclick="swap_content('span:i161'); return false;"><b>metric_cone</b></a>
			(n)  

			
				→ Cone<div style="display: inline" id="span:i161" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produces the cone of all metrics with <em class="param">n</em> elements.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i177" onclick="swap_content('span:i177'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i177" onclick="swap_content('span:i177'); return false;"><b>multiplex</b></a>
			(d, n)  

			
				→ Polytope<div style="display: inline" id="span:i177" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a combinatorial description of a multiplex with parameters <em class="param">d</em> and <em class="param">n</em>.
 This yields a self-dual <em class="param">d</em>-dimensional polytope with <em class="param">n</em>+1 vertices.</p><p> They are introduced by
</p><blockquote><div> T. Bisztriczky,</div><div> On a class of generalized simplices, Mathematika 43:27-285, 1996,</div></blockquote><p> see also
</p><blockquote><div> M.M. Bayer, A.M. Bruening, and J.D. Stewart,</div><div> A combinatorial study of multiplexes and ordinary polytopes,</div><div> Discrete Comput. Geom. 27(1):49--63, 2002.</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i182" onclick="swap_content('span:i182'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i182" onclick="swap_content('span:i182'); return false;"><b>neighborly_cubical</b></a>
			(d, n)  

			
				→ Polytope<div style="display: inline" id="span:i182" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce the combinatorial description of a neighborly cubical polytope.
 The facets are labelled in oriented matroid notation as in the cubical Gale evenness criterion.
</p><blockquote><div> See Joswig and Ziegler, Discr. Comput. Geom. 24:315-344 (2000).</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>dimension of the polytope</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>dimension of the equivalent cube</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i174" onclick="swap_content('span:i174'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i174" onclick="swap_content('span:i174'); return false;"><b>newton</b></a>
			(p)  

			
				→ LatticePolytope<div style="display: inline" id="span:i174" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce the Newton polytope of a polynomial <em class="param">p</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i40" onclick="unfold('span:i40');">Polynomial</a></td><td class="param">p</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i37" onclick="unfold('span:i37');">LatticePolytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i173" onclick="swap_content('span:i173'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i173" onclick="swap_content('span:i173'); return false;"><b>n_gon</b></a>
			(n, r)  

			
				→ Polytope<div style="display: inline" id="span:i173" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a regular <em class="param">n</em>-gon.
 All vertices lie on a circle of radius <em class="param">r</em>.
 The radius defaults to 1.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of vertices</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">r</td><td><div class="descr"><div>the radius</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i180" onclick="swap_content('span:i180'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i180" onclick="swap_content('span:i180'); return false;"><b>permutahedron</b></a>
			(d)  

			
				→ Polytope<div style="display: inline" id="span:i180" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional permutahedron.
 The vertices correspond to the elements of the symmetric group of degree <em class="param">d</em>+1.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i164" onclick="swap_content('span:i164'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i164" onclick="swap_content('span:i164'); return false;"><b>pile</b></a>
			(sizes)  

			
				→ Polytope<div style="display: inline" id="span:i164" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a (<em class="param">d</em>+1)-dimensional polytope from a pile of cubes.
 Start with a <em class="param">d</em>-dimensional pile of cubes.  Take a generic convex function
 to lift this polytopal complex to the boundary of a (<em class="param">d</em>+1)-polytope.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Int&gt;</a></td><td class="param">sizes</td><td><div class="descr"><div>a vector (s<sub>1</sub>,...,s<sub>d</sub>,
   where s<sub>i</sub> specifies the number of boxes in the i-th dimension.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i165" onclick="swap_content('span:i165'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i165" onclick="swap_content('span:i165'); return false;"><b>rand01</b></a>
			(d, n)  

			
				→ Polytope<div style="display: inline" id="span:i165" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional 0/1-polytope with <em class="param">n</em> random vertices.
 Uniform distribution.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of random vertices</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome. </div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i171" onclick="swap_content('span:i171'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i171" onclick="swap_content('span:i171'); return false;"><b>rand_box</b></a>
			(d, n, b)  

			
				→ Polytope<div style="display: inline" id="span:i171" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the convex hull of <em class="param">n</em> points sampled uniformly at random from the
 integer points in the cube [0,<em class="param">b</em>]<sup><em class="param">d</em></sup>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension of the box</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of random points</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">b</td><td><div class="descr"><div>the size of the box</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i186" onclick="swap_content('span:i186'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i186" onclick="swap_content('span:i186'); return false;"><b>rand_metric</b></a>
			&lt;Scalar&gt;
		 
			(n)  

			
				→ Matrix<div style="display: inline" id="span:i186" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce an <em class="param">n</em>-point metric with random distances. The values are uniformily
 distributed in [1,2].</p></div></div><div class="level3"><h5>Type Parameters</h5><table class="args"><tr><td class="param">Scalar</td><td><div class="descr"><div>element type of the result matrix</div></div></td></tr></table><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome. </div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i184" onclick="swap_content('span:i184'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i184" onclick="swap_content('span:i184'); return false;"><b>rand_metric_int</b></a>
			&lt;Scalar&gt;
		 
			(n)  

			
				→ Matrix<div style="display: inline" id="span:i184" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce an <em class="param">n</em>-point metric with random distances. The values are uniformily
 distributed in [1,2].</p></div></div><div class="level3"><h5>Type Parameters</h5><table class="args"><tr><td class="param">Scalar</td><td><div class="descr"><div>element type of the result matrix</div></div></td></tr></table><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome. </div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i155" onclick="swap_content('span:i155'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i155" onclick="swap_content('span:i155'); return false;"><b>rand_sphere</b></a>
			(d, n)  

			
				→ Polytope<div style="display: inline" id="span:i155" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional polytope with <em class="param">n</em> random vertices
 uniformly distributed on the unit sphere.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of random vertices</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>controls the outcome of the random number generator;
   fixing a seed number guarantees the same outcome. </div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i159" onclick="swap_content('span:i159'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i159" onclick="swap_content('span:i159'); return false;"><b>rss_associahedron</b></a>
			(l)  

			
				→ Polytope<div style="display: inline" id="span:i159" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a polytope of constrained expansions in dimension <em class="param">l</em> according to
</p><blockquote><div> Rote, Santos, and Streinu: Expansive motions and the polytope of pointed pseudo-triangulations.</div><div> Discrete and computational geometry, 699--736, Algorithms Combin., 25, Springer, Berlin, 2003.</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">l</td><td><div class="descr"><div>ambient dimension</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i168" onclick="swap_content('span:i168'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i168" onclick="swap_content('span:i168'); return false;"><b>signed_permutahedron</b></a>
			(d)  

			
				→ Polytope<div style="display: inline" id="span:i168" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce a <em class="param">d</em>-dimensional signed permutahedron.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i166" onclick="swap_content('span:i166'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i166" onclick="swap_content('span:i166'); return false;"><b>simplex</b></a>
			(d, scale)  

			
				→ Polytope<div style="display: inline" id="span:i166" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce the standard <em class="param">d</em>-simplex.
 Combinatorially equivalent to a regular polytope corresponding to the Coxeter group of type A<sub><em class="param">d</em>-1</sub>.
 Optionally, the simplex can be scaled by the parameter <em class="param">scale</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">scale</td><td><div class="descr"><div>default value: 1</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i176" onclick="swap_content('span:i176'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i176" onclick="swap_content('span:i176'); return false;"><b>transportation</b></a>
			(r, c)  

			
				→ Polytope<div style="display: inline" id="span:i176" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce the transportation polytope from two vectors <em class="param">r</em> of length m and <em class="param">c</em> of length n,
 i.e. all positive m×n Matrizes with row sums equal to <em class="param">r</em> and column sums equal to <em class="param">c</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">r</td><td/></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">c</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i10" onclick="swap_content('span:i10'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i10" onclick="swap_content('span:i10'); return false;"><span class="category">Subdivisions</span></a></h3></div><div style="display: inline" id="span:i10" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i107" onclick="swap_content('span:i107'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i107" onclick="swap_content('span:i107'); return false;"><b>barycentric_subdivision</b></a>
			(pc)  

			
				→ PointConfiguration<div style="display: inline" id="span:i107" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Create a point configuration as a barycentric subdivision of a given one.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i49" onclick="unfold('span:i49');">PointConfiguration</a></td><td class="param">pc</td><td><div class="descr"><div>input point configuration</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">no_labels</td><td><div class="descr"><div>do not write any labels</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i49" onclick="unfold('span:i49');">PointConfiguration</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i118" onclick="swap_content('span:i118'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i118" onclick="swap_content('span:i118'); return false;"><b>common_refinement</b></a>
			(points, sub1, sub2, dim)  

			
				→ Array&lt;Set&lt;Int&gt;&gt;<div style="display: inline" id="span:i118" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the common refinement of two subdivisions of <em class="param">points</em>.
 It is assumed that there exists a common refinement of the two subdivisions.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&gt;</a></td><td class="param">sub1</td><td><div class="descr"><div>first subdivision</div></div></td></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&gt;</a></td><td class="param">sub2</td><td><div class="descr"><div>second subdivision</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">dim</td><td><div class="descr"><div>dimension of the point configuration</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td><div class="descr"><div>the common refinement</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i294" onclick="swap_content('span:i294'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i294" onclick="swap_content('span:i294'); return false;"><b>common_refinement</b></a>
			(p1, p2)  

			
				→ Polytope<div style="display: inline" id="span:i294" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the common refinement of two subdivisions of the same polytope <em class="param">p1</em>, <em class="param">p2</em>.
 It is assumed that there exists a common refinement of the two subdivisions.
 It is not checked if <em class="param">p1</em> and <em class="param">p2</em> are indeed the same!</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">p1</td><td/></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">p2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i116" onclick="swap_content('span:i116'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i116" onclick="swap_content('span:i116'); return false;"><b>is_regular</b></a>
			(points, subdiv)  

			
				→ Pair&lt;bool,Cone&gt;<div style="display: inline" id="span:i116" class="foldit"><br/><div class="descr_func"><div class="descr"><p> For a given subdivision <em class="param">subdiv</em> of <em class="param">points</em> tests
 if the subdivision is regular and if yes computes a weight
 vector inducing this subdivsion.
 The output is a pair of bool and the weight vector.
 Options can be used to ensure properties of the resulting vector.
 The default is having 0 on all vertices of the first face of <em class="param">subdiv</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt; &gt;</a></td><td class="param">subdiv</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix&lt;Rational&gt;</a></td><td class="param">equations</td><td><div class="descr"><div>system of linear equation the cone is cut with.</div></div></td></tr><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td class="param">lift_to_zero</td><td><div class="descr"><div>gives only lifting functions lifting the designated vertices to 0</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">lift_face_to_zero</td><td><div class="descr"><div>gives only lifting functions lifting all vertices of the designated face to 0</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i29" onclick="unfold('span:i29');">Pair&lt;bool,Cone&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i115" onclick="swap_content('span:i115'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i115" onclick="swap_content('span:i115'); return false;"><b>is_subdivision</b></a>
			(points, faces)  

			<div style="display: inline" id="span:i115" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Checks whether <em class="param">faces</em> forms a valid subdivision of <em class="param">points</em>, where <em class="param">points</em>
 is a set of points, and <em class="param">faces</em> is a collection of subsets of (indices of) <em class="param">points</em>.
 If the set of interior points of <em class="param">points</em> is known, this set can be passed by assigning
 it to the option <em class="param">interior_points</em>. If <em class="param">points</em> are in convex position
 (i.e., if they are vertices of a polytope),
 the option <em class="param">interior_points</em> should be set to [ ] (the empty set).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td class="param">faces</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td class="param">interior_points</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i109" onclick="swap_content('span:i109'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i109" onclick="swap_content('span:i109'); return false;"><b>placing_triangulation</b></a>
			(Points, permutation)  

			
				→ Array&lt;Set&lt;Int&gt;&gt;<div style="display: inline" id="span:i109" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the placing triangulation of the given point set using the beneath-beyond algorithm.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">Points</td><td><div class="descr"><div>the given point set</div></div></td></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Int&gt;</a></td><td class="param">permutation</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i110" onclick="swap_content('span:i110'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i110" onclick="swap_content('span:i110'); return false;"><b>regular_subdivision</b></a>
			(points, weights)  

			
				→ Array&lt;Set&lt;Int&gt;&gt;<div style="display: inline" id="span:i110" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute a regular subdivision of the polytope obtained
 by lifting <em class="param">points</em> to <em class="param">weights</em> and taking the lower
 complex of the resulting polytope.
 If the weight is generic the output is a triangulation.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">weights</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i104" onclick="swap_content('span:i104'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i104" onclick="swap_content('span:i104'); return false;"><b>secondary_cone</b></a>
			(points, subdiv)  

			
				→ Cone<div style="display: inline" id="span:i104" class="foldit"><br/><div class="descr_func"><div class="descr"><p> For a given subdivision <em class="param">subdiv</em> of <em class="param">points</em> tests
 computes the corresponding secondary cone. If the subdivision
 is not regular, the result will be the trivial cone.
 Options can be used to make the Cone <a href="#i505" onclick="unfold('span:i505');">POINTED</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt; &gt;</a></td><td class="param">subdiv</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix&lt;Rational&gt;</a></td><td class="param">equations</td><td><div class="descr"><div>system of linear equation the cone is cut with.</div></div></td></tr><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td class="param">lift_to_zero</td><td><div class="descr"><div>gives only lifting functions lifting the designated vertices to 0</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">lift_face_to_zero</td><td><div class="descr"><div>gives only lifting functions lifting all vertices of the designated face to 0</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i105" onclick="swap_content('span:i105'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i105" onclick="swap_content('span:i105'); return false;"><b>splits</b></a>
			(V, G, F, dimension)  

			
				→ Matrix<div style="display: inline" id="span:i105" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the <a href="#i380" onclick="unfold('span:i380');">SPLITS</a> of a polytope.
 The splits are normalized by dividing by the first non-zero entry.
 If the polytope is not fulldimensional the first entries are set to zero unless <em class="param">coords</em>
 are specified.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">V</td><td><div class="descr"><div>vertices of the polytope</div></div></td></tr><tr><td><a href="graph.html#i13" onclick="unfold('span:i13');">Graph</a></td><td class="param">G</td><td><div class="descr"><div>graph of the polytope</div></div></td></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">F</td><td><div class="descr"><div>facets of the polytope</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">dimension</td><td><div class="descr"><div>of the polytope</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td class="param">coords</td><td><div class="descr"><div>entries that should be set to zero</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i113" onclick="swap_content('span:i113'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i113" onclick="swap_content('span:i113'); return false;"><b>splits_in_subdivision</b></a>
			(vertices, subdivision, splits)  

			
				→ Set&lt;Int&gt;<div style="display: inline" id="span:i113" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Tests which of the <em class="param">splits</em> of a polyhedron are coarsenings of the given <em class="param">subdivision</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">vertices</td><td><div class="descr"><div>the vertices of the polyhedron</div></div></td></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td class="param">subdivision</td><td><div class="descr"><div>a subdivision of the polyhedron</div></div></td></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">splits</td><td><div class="descr"><div>the splits of the polyhedron</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i106" onclick="swap_content('span:i106'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i106" onclick="swap_content('span:i106'); return false;"><b>split_compatibility_graph</b></a>
			(splits, P)  

			
				→ Graph<div style="display: inline" id="span:i106" class="foldit"><br/><div class="descr_func"><div class="descr"><p>DOC_FIXME: Incomprehensible description!
 Computes the compatibility graph among the <em class="param">splits</em> of a polytope <em class="param">P</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">splits</td><td><div class="descr"><div>the splits given by split equations</div></div></td></tr><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>the input polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="graph.html#i13" onclick="unfold('span:i13');">Graph</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i114" onclick="swap_content('span:i114'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i114" onclick="swap_content('span:i114'); return false;"><b>split_polyhedron</b></a>
			(P)  

			
				→ Polytope<div style="display: inline" id="span:i114" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the split polyhedron of a full-dimensional
 polyhdron <em class="param">P</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i117" onclick="swap_content('span:i117'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i117" onclick="swap_content('span:i117'); return false;"><b>staircase_weight</b></a>
			(k, l)  

			
				→ Vector&lt;Rational&gt;<div style="display: inline" id="span:i117" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Gives a weight vector for the staircase triangulation of
 the product of a <em class="param">k</em>- and an <em class="param">l</em>-dimensional simplex.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">k</td><td><div class="descr"><div>the dimension of the first simplex</div></div></td></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">l</td><td><div class="descr"><div>the dimension of the second simplex</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector&lt;Rational&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i111" onclick="swap_content('span:i111'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i111" onclick="swap_content('span:i111'); return false;"><b>stellar_subdivision</b></a>
			(pc, faces)  

			
				→ PointConfiguration<div style="display: inline" id="span:i111" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the complex obtained by stellar subdivision of all <em class="param">faces</em> of the <a href="#i657" onclick="unfold('span:i657');">TRIANGULATION</a> of the PointConfiguration.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i49" onclick="unfold('span:i49');">PointConfiguration</a></td><td class="param">pc</td><td><div class="descr"><div>input point configuration</div></div></td></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&lt;Int&gt;&gt;</a></td><td class="param">faces</td><td><div class="descr"><div>list of faces to subdivide</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">no_labels</td><td><div class="descr"><div>: do not write any labels</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i49" onclick="unfold('span:i49');">PointConfiguration</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i108" onclick="swap_content('span:i108'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i108" onclick="swap_content('span:i108'); return false;"><b>tight_span</b></a>
			(points, weight, full)  

			
				→ Polytope<div style="display: inline" id="span:i108" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the tight span dual to the regular subdivision
 obtained by lifting <em class="param">points</em> to <em class="param">weight</em>
 and taking the lower complex of the resulting polytope.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">weight</td><td/></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">full</td><td><div class="descr"><div>true if the polytope is full-dimensional.
        Default value is 1.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td><div class="descr"><div>(The polymake object <a href="#i42" onclick="unfold('span:i42');">TightSpan</a> is only used for tight spans of finite metric spaces, not for tight spans of subdivisions in general.)</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i292" onclick="swap_content('span:i292'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i292" onclick="swap_content('span:i292'); return false;"><b>tight_span</b></a>
			(P)  

			
				→ Polytope<div style="display: inline" id="span:i292" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the tight span dual to the regular subdivision of a polytope <em class="param">P</em>
 obtained by the <a href="#i700" onclick="unfold('span:i700');">WEIGHTS</a> and taking the lower complex of the resulting polytope.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td><div class="descr"><div>(The polymake object <a href="#i42" onclick="unfold('span:i42');">TightSpan</a> is only used for tight spans of finite metric spaces, not for tight spans of subdivisions in general.)</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i112" onclick="swap_content('span:i112'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i112" onclick="swap_content('span:i112'); return false;"><b>topcom_all_triangulations</b></a>
			(pc)  

			
				→ Array&lt;Array&lt;Set&lt;Int&gt;&gt;&gt;<div style="display: inline" id="span:i112" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute all triangulations of a point configuration via its chirotope.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i49" onclick="unfold('span:i49');">PointConfiguration</a></td><td class="param">pc</td><td><div class="descr"><div>input point configuration</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Array&lt;Set&lt;Int&gt;&gt;&gt;</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i30" onclick="swap_content('span:i30'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i30" onclick="swap_content('span:i30'); return false;"><span class="category">Symmetry</span></a></h3></div><div style="display: inline" id="span:i30" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i247" onclick="swap_content('span:i247'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i247" onclick="swap_content('span:i247'); return false;"><b>lattice_automorphisms_smooth_polytope</b></a>
			(P)  

			<div style="display: inline" id="span:i247" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Returns a generating set for the lattice automorphism group of a smooth polytope
 by comparing lattice distances between vertices and facets. </p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i37" onclick="unfold('span:i37');">LatticePolytope</a></td><td class="param">P</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i28" onclick="swap_content('span:i28'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i28" onclick="swap_content('span:i28'); return false;"><span class="category">Tight Span</span></a></h3></div><div style="display: inline" id="span:i28" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i241" onclick="swap_content('span:i241'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i241" onclick="swap_content('span:i241'); return false;"><b>max_metric</b></a>
			(n)  

			
				→ Matrix<div style="display: inline" id="span:i241" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute a metric such that the f-vector of its tight span is maximal among all metrics with <em class="param">n</em> points.
</p><blockquote><div> S. Herrmann and M. Joswig: Bounds on the f-vectors of tight spans.</div><div> Contrib. Discrete Math., Vol.2, 2007 161-184</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of points</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i242" onclick="swap_content('span:i242'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i242" onclick="swap_content('span:i242'); return false;"><b>metric2hyp_triang</b></a>
			(FMS)  

			
				→ Polytope<div style="display: inline" id="span:i242" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Given a generic finite metric space <em class="param">FMS</em>, construct the associated (i.e. dual) triangulation of the hypersimplex.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i42" onclick="unfold('span:i42');">TightSpan</a></td><td class="param">FMS</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i238" onclick="swap_content('span:i238'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i238" onclick="swap_content('span:i238'); return false;"><b>metric2splits</b></a>
			(D)  

			
				→ Array&lt;Pair&lt;Set&gt;&gt;<div style="display: inline" id="span:i238" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes all non-trivial splits of a metric space <em class="param">D</em> (encoded as a symmetric distance matrix).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">D</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Pair&lt;Set&gt;&gt;</a></td><td><div class="descr"><div>each split is encoded as a pair of two sets.</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i240" onclick="swap_content('span:i240'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i240" onclick="swap_content('span:i240'); return false;"><b>min_metric</b></a>
			(n)  

			
				→ Matrix<div style="display: inline" id="span:i240" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute a metric such that the f-vector of its tight span is minimal among all metrics with <em class="param">n</em> points.
</p><blockquote><div> S. Herrmann and M. Joswig: Bounds on the f-vectors of tight spans.</div><div> Contrib. Discrete Math., Vol.2, 2007 161-184</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of points</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i245" onclick="swap_content('span:i245'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i245" onclick="swap_content('span:i245'); return false;"><b>points2metric</b></a>
			(points)  

			
				→ Matrix<div style="display: inline" id="span:i245" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Define a metric by restricting the Euclidean distance function to a given set of <em class="param">points</em>.
 Due to floating point computations (sqrt is used) the metric defined may not be exact.
 If the option <em class="param">max</em> or <em class="param">l1</em> is set to true the max-norm or l1-nomr is used instead (with exact computation).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">max</td><td><div class="descr"><div>triggers the usage of the max-norm (exact computation)</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">l1</td><td><div class="descr"><div>triggers the usage of the l1-norm (exact computation)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i244" onclick="swap_content('span:i244'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i244" onclick="swap_content('span:i244'); return false;"><b>poly2metric</b></a>
			(P)  

			
				→ Matrix<div style="display: inline" id="span:i244" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Define a metric by restricting the Euclidean distance function to the vertex set of a given polytope <em class="param">P</em>.
 Due to floating point computations (sqrt is used) the metric defined may not be exact.
 If the option <em class="param">max</em> or <em class="param">l1</em> is set to true the max-norm or l1-nomr is used instead (with exact computation).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">max</td><td><div class="descr"><div>triggers the usage of the max-norm (exact computation)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i239" onclick="swap_content('span:i239'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i239" onclick="swap_content('span:i239'); return false;"><b>thrackle_metric</b></a>
			(n)  

			
				→ Matrix<div style="display: inline" id="span:i239" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute a metric such that the f-vector of its tight span is maximal among all metrics with <em class="param">n</em> points.
 This metric can be interpreted as a lifting function for the thrackle triangulation (see de Loera,
 Sturmfels and Thomas: Groebner Basis and triangultaions of the second hypersimplex)</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of points</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i236" onclick="swap_content('span:i236'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i236" onclick="swap_content('span:i236'); return false;"><b>ts_max_metric</b></a>
			(n)  

			
				→ TightSpan<div style="display: inline" id="span:i236" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the tight span of a metric such that its f-vector is maximal among all metrics with <em class="param">n</em> points.
</p><blockquote><div> S. Herrmann and M. Joswig: Bounds on the f-vectors of tight spans.</div><div> Contrib. Discrete Math., Vol.2, 2007 161-184</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of points</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i42" onclick="unfold('span:i42');">TightSpan</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i237" onclick="swap_content('span:i237'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i237" onclick="swap_content('span:i237'); return false;"><b>ts_min_metric</b></a>
			(n)  

			
				→ TightSpan<div style="display: inline" id="span:i237" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the tight span of a metric such its f-vector is minimal among all metrics with <em class="param">n</em> points.
</p><blockquote><div> S. Herrmann and M. Joswig: Bounds on the f-vectors of tight spans.</div><div> Contrib. Discrete Math., Vol.2, 2007 161-184</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of points</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i42" onclick="unfold('span:i42');">TightSpan</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i243" onclick="swap_content('span:i243'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i243" onclick="swap_content('span:i243'); return false;"><b>ts_thrackle_metric</b></a>
			(n)  

			
				→ TightSpan<div style="display: inline" id="span:i243" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute a tight span of a metric such that its f-vector is maximal among all metrics with <em class="param">n</em> points.
 This metric can be interpreted as a lifting function for the thrackle triangulation (see de Loera,
 Sturmfels and Thomas: Groebner Basis and triangultaions of the second hypersimplex)</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of points</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i42" onclick="unfold('span:i42');">TightSpan</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i24" onclick="swap_content('span:i24'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i24" onclick="swap_content('span:i24'); return false;"><span class="category">Transforming a lattice polyhedron</span></a></h3></div><div style="display: inline" id="span:i24" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i223" onclick="swap_content('span:i223'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i223" onclick="swap_content('span:i223'); return false;"><b>ambient_lattice_normalization</b></a>
			(p)  

			
				→ Polytope<div style="display: inline" id="span:i223" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Transform to a full-dimensional polytope while preserving
 the ambient lattice Z^n</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">p</td><td><div class="descr"><div>the input polytope,</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">store_transform</td><td><div class="descr"><div>store the reverse transformation as an attachement</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td><div class="descr"><div>- the transformed polytope defined by its vertices.
  Facets are only written if available in <em class="param">p</em>.</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i222" onclick="swap_content('span:i222'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i222" onclick="swap_content('span:i222'); return false;"><b>vertex_lattice_normalization</b></a>
			(p)  

			
				→ Polytope<div style="display: inline" id="span:i222" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Transform to a full-dimensional polytope while preserving
 the lattice spanned by vertices
 induced lattice of new vertices = Z^dim</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">p</td><td><div class="descr"><div>the input polytope,</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">store_transform</td><td><div class="descr"><div>store the reverse transformation as an attachement</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td><div class="descr"><div>- the transformed polytope defined by its vertices.
  Facets are only written if available in <em class="param">p</em>.</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i14" onclick="swap_content('span:i14'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i14" onclick="swap_content('span:i14'); return false;"><span class="category">Transforming a polyhedron</span></a></h3></div><div style="display: inline" id="span:i14" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i126" onclick="swap_content('span:i126'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i126" onclick="swap_content('span:i126'); return false;"><b>bound</b></a>
			(P)  

			
				→ Polytope<div style="display: inline" id="span:i126" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make a positive polyhedron bounded.
 Apply a projective linear transformation to a polyhedron mapping the far hyperplane
 to the hyperplane spanned by the points (1,0,...,0,1,0,...).
 The origin (1,0,...,0) is fixed.</p><p> The input polyhedron should be <a href="#i463" onclick="unfold('span:i463');">POSITIVE</a>; i.e. no negative coordinates.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>a positive polyhedron</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i132" onclick="swap_content('span:i132'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i132" onclick="swap_content('span:i132'); return false;"><b>center</b></a>
			(P)  

			
				→ Polytope<div style="display: inline" id="span:i132" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make a polyhedron centered.
 Apply a linear transformation to a polyhedron <em class="param">P</em> such that a relatively interior point
 (preferably the vertex barycenter) is moved to the origin (1,0,...,0).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i133" onclick="swap_content('span:i133'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i133" onclick="swap_content('span:i133'); return false;"><b>orthantify</b></a>
			(P, v)  

			
				→ Polytope<div style="display: inline" id="span:i133" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make a polyhedron <a href="#i463" onclick="unfold('span:i463');">POSITIVE</a>.
 Apply an affine transformation to a polyhedron such that the vertex <em class="param">v</em> is mapped
 to the origin (1,0,...,0) and as many facets through this vertex as possible are
 mapped to the bounding facets of the first orthant.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">v</td><td><div class="descr"><div>vertex to be moved to the origin.
   By default it is the first affine vertex of the polyhedron.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i131" onclick="swap_content('span:i131'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i131" onclick="swap_content('span:i131'); return false;"><b>polarize</b></a>
			(C)  

			
				→ Cone<div style="display: inline" id="span:i131" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Given a bounded, centered, and full-dimensional polytope <em class="param">P</em>, produce its polar,
 that is, polar with respect to the standard Euclidean scalar product.
 Note that the definition of the polar has changed after version 2.10: 
 the polar is reflected in the origin to conform with cone dualization</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td class="param">C</td><td/></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">noc</td><td><div class="descr"><div>only combinatorial information is handled</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i129" onclick="swap_content('span:i129'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i129" onclick="swap_content('span:i129'); return false;"><b>revert</b></a>
			(P)  

			
				→ Polytope<div style="display: inline" id="span:i129" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Apply a reverse transformation to a given polyhedron <em class="param">P</em>.
 All transformation clients keep track of the polytope's history.
 They write or update the attachment REVERSE_TRANSFORMATION.</p><p> Applying revert to the transformed polytope reconstructs the original polyhedron.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>a (transformed) polytope</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i130" onclick="swap_content('span:i130'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i130" onclick="swap_content('span:i130'); return false;"><b>scale</b></a>
			(P, factor, store)  

			
				→ Polytope<div style="display: inline" id="span:i130" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Scale a polyhedron <em class="param">P</em> by a given scaling parameter <em class="param">factor</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>the polyhedron to be scaled</div></div></td></tr><tr><td>Scalar</td><td class="param">factor</td><td><div class="descr"><div>the scaling factor</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">store</td><td><div class="descr"><div>stores the reverse transformation as an attachment (REVERSE_TRANSFORMATION);
   default value: 1.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i127" onclick="swap_content('span:i127'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i127" onclick="swap_content('span:i127'); return false;"><b>transform</b></a>
			(P, trans, store)  

			
				→ Polytope<div style="display: inline" id="span:i127" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Transform a polyhedron <em class="param">P</em> according to the linear
 transformation <em class="param">trans</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>the polyhedron to be transformed</div></div></td></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">trans</td><td><div class="descr"><div>the transformation matrix</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">store</td><td><div class="descr"><div>stores the reverse transformation as an attachment (REVERSE_TRANSFORMATION);
   default value: 1.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i128" onclick="swap_content('span:i128'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i128" onclick="swap_content('span:i128'); return false;"><b>translate</b></a>
			(P, trans, store)  

			
				→ Polytope<div style="display: inline" id="span:i128" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Translate a polyhedron <em class="param">P</em> by a given translation vector <em class="param">trans</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td><div class="descr"><div>the polyhedron to be translated</div></div></td></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">trans</td><td><div class="descr"><div>the translation vector</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">store</td><td><div class="descr"><div>stores the reverse transformation as an attachment (REVERSE_TRANSFORMATION);
   default value: 1.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i20" onclick="swap_content('span:i20'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i20" onclick="swap_content('span:i20'); return false;"><span class="category">Triangulation and Volume</span></a></h3></div><div style="display: inline" id="span:i20" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i152" onclick="swap_content('span:i152'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i152" onclick="swap_content('span:i152'); return false;"><b>positive_circuits</b></a>
			(or, S)  

			
				→ Set&lt;Set&lt;Int&gt;&gt;<div style="display: inline" id="span:i152" class="foldit"><br/><div class="descr_func"><div class="descr"><p> returns all sets of points that form a 
 circuit with the given list of points</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">or</td><td><div class="descr"><div>PointConfiguration P</div></div></td></tr><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Int&gt;</a></td><td class="param">S</td><td><div class="descr"><div>subset of point indices</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set&lt;Set&lt;Int&gt;&gt;</a></td><td><div class="descr"><div>A list of point sets that intersect positively the set S</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i26" onclick="swap_content('span:i26'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i26" onclick="swap_content('span:i26'); return false;"><span class="category">Utilities</span></a></h3></div><div style="display: inline" id="span:i26" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i229" onclick="swap_content('span:i229'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i229" onclick="swap_content('span:i229'); return false;"><b>lp2poly</b></a>
			(file)  

			
				→ Polytope&lt;Float&gt;<div style="display: inline" id="span:i229" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Read a linear programming problem given in LP-Format (as used by cplex &amp; Co.)
 and convert it to a <a href="#i40" onclick="unfold('span:i40');">Polytope&lt;Float&gt;</a> object</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">file</td><td><div class="descr"><div>filename of a linear programming problem in LP-Format</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i40" onclick="unfold('span:i40');">Polytope&lt;Float&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i226" onclick="swap_content('span:i226'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i226" onclick="swap_content('span:i226'); return false;"><b>poly2lp</b></a>
			(P, LP, maximize, file)  

			<div style="display: inline" id="span:i226" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Convert a polymake description of a polyhedron to LP format (as used by CPLEX and
 other linear problem solvers) and write it to standard output or to a <em class="param">file</em>.
 If <em class="param">LP</em> comes with an attachment 'INTEGER_VARIABLES' (of type Array&lt;Bool&gt;),
 the output will contain an additional section 'GENERAL',
 allowing for IP computations in CPLEX.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="#i266" onclick="unfold('span:i266');">LinearProgram</a></td><td class="param">LP</td><td><div class="descr"><div>default value: <em class="param">P</em>-&gt;LP</div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">maximize</td><td><div class="descr"><div>produces a maximization problem; default value: 0 (minimize)</div></div></td></tr><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">file</td><td><div class="descr"><div>default value: standard output</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i227" onclick="swap_content('span:i227'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i227" onclick="swap_content('span:i227'); return false;"><b>porta2poly</b></a>
			(file)  

			
				→ Polytope&lt;Rational&gt;<div style="display: inline" id="span:i227" class="foldit"><br/><div class="descr_func"><div class="descr"><p>  Read an .ieq or .poi file (porta input) or .poi.ieq or .ieq.poi (porta output)
  and convert it to a <a href="#i43" onclick="unfold('span:i43');">Polytope&lt;Rational&gt;</a> object</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">file</td><td><div class="descr"><div>filename of a porta file (.ieq or .poi)</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i43" onclick="unfold('span:i43');">Polytope&lt;Rational&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i228" onclick="swap_content('span:i228'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i228" onclick="swap_content('span:i228'); return false;"><b>print_face_lattice</b></a>
			(VIF, dual)  

			<div style="display: inline" id="span:i228" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Write the face lattice of a vertex-facet incidence matrix <em class="param">VIF</em> to stdout.
 If <em class="param">dual</em> is set true the face lattice of the dual is printed.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i27" onclick="unfold('span:i27');">IncidenceMatrix</a></td><td class="param">VIF</td><td/></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">dual</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i15" onclick="swap_content('span:i15'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i15" onclick="swap_content('span:i15'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i15" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i134" onclick="swap_content('span:i134'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i134" onclick="swap_content('span:i134'); return false;"><b>bounding_box</b></a>
			(V, surplus_k, voronoi)  

			
				→ Matrix<div style="display: inline" id="span:i134" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Introduce artificial boundary facets (which are always vertical,
 i.e., the last coordinate is zero) to allow for bounded images of 
 unbounded polyhedra (e.g. Voronoi polyhedra).
 If the <em class="param">voronoi</em> flag is set, the last direction is left unbounded.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">V</td><td><div class="descr"><div>vertices that should be in the box</div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">surplus_k</td><td><div class="descr"><div>size of the bounding box relative to the box spanned by <em class="param">V</em></div></div></td></tr><tr><td><a href="common.html#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">voronoi</td><td><div class="descr"><div>useful for visualizations of Voronoi diagrams that do not have enough vertices
  default value is 0.</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i135" onclick="swap_content('span:i135'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i135" onclick="swap_content('span:i135'); return false;"><b>clip_graph</b></a>
			(p, V, G)  

			<div style="display: inline" id="span:i135" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Clip a graph with respect to a given bounding box.
 Used for the visualization of Voronoi diagrams.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i38" onclick="unfold('span:i38');">Polytope</a></td><td class="param">p</td><td/></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">V</td><td/></tr><tr><td><a href="graph.html#i13" onclick="unfold('span:i13');">Graph</a></td><td class="param">G</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i136" onclick="swap_content('span:i136'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i136" onclick="swap_content('span:i136'); return false;"><b>splitstree</b></a>
			(vis_obj ...)  

			<div style="display: inline" id="span:i136" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Call <a href="http://polymake.org//external_software#splitstree" onclick="unfold('span:splitstree');">wiki:external_software#SplitsTree</a> with the given visual objects.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>Visual::Object</td><td class="param">vis_obj ...</td><td><div class="descr"><div>objects to display</div></div></td></tr></table><h5>Options</h5><table class="args"><tr><td><a href="common.html#i10" onclick="unfold('span:i10');">String</a></td><td class="param">File</td><td><div class="descr"><div>"filename" or "AUTO"
  Only create a NEXUS format file, don't start the GUI.</div><div>  The <code>.nex</code> suffix is automatically added to the file name.</div><div>  Specify <em class="param">AUTO</em> if you want the filename be automatically derived from the drawing title.</div><div>  You can also use any expression allowed for the <code>open</code> function,
  including "-" for terminal output, "&amp;HANDLE" for an already opened file handle,
  or "| program" for a pipe.</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i25" onclick="swap_content('span:i25'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i25" onclick="swap_content('span:i25'); return false;"><span class="category">Working with symmetries</span></a></h3></div><div style="display: inline" id="span:i25" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i225" onclick="swap_content('span:i225'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i225" onclick="swap_content('span:i225'); return false;"><b>linear_symmetries</b></a>
			(c, dual)  

			
				→ void<div style="display: inline" id="span:i225" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the linear symmetries of a given polytope <em class="param">p</em>
 via 'sympol'. The symmetry group is stored in the property GROUP.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td class="param">c</td><td><div class="descr"><div>the cone whose linear symmetry group is to be computed</div></div></td></tr><tr><td>bool</td><td class="param">dual</td><td><div class="descr"><div>true if group action on vertices, false if action on facets</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td>void</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i224" onclick="swap_content('span:i224'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i224" onclick="swap_content('span:i224'); return false;"><b>representation_conversion_up_to_symmetry</b></a>
			(c, a, dual)  

			
				→ perl::ListReturn<div style="display: inline" id="span:i224" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the dual description of a polytope up to its linear symmetry group.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i34" onclick="unfold('span:i34');">Cone</a></td><td class="param">c</td><td><div class="descr"><div>the cone whose dual description is to be computed</div></div></td></tr><tr><td>Group</td><td class="param">a</td><td><div class="descr"><div>symmetry group of the cone <em class="param">c</em> (GroupOfCone or GroupOfPolytope)</div></div></td></tr><tr><td>bool</td><td class="param">dual</td><td><div class="descr"><div>true if V to H, false if H to V</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td>perl::ListReturn</td><td><div class="descr"><div>list which contains success as bool, vertices/inequalities and lineality/equations as Matrix&lt;Rational&gt;</div></div></td></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div><div class="level3"><h2>Common Option Lists</h2><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i31" onclick="swap_content('span:i31'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i31" onclick="swap_content('span:i31'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i31" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i248" onclick="swap_content('span:i248'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i248" onclick="swap_content('span:i248'); return false;"><b>schlegel_init</b></a><div style="display: inline" id="span:i248" class="foldit"><div class="descr"><p> Initial properties of the Schlegel diagram to be displayed.</p></div><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">FACET</td><td><div class="descr"><div>index of the projection facet, see <a href="#i322" onclick="unfold('span:i322');">SchlegelDiagram::FACET</a></div></div></td></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">ZOOM</td><td><div class="descr"><div>zoom factor, see <a href="#i326" onclick="unfold('span:i326');">SchlegelDiagram::ZOOM</a></div></div></td></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">FACET_POINT</td><td><div class="descr"><div>see <a href="#i327" onclick="unfold('span:i327');">SchlegelDiagram::FACET_POINT</a></div></div></td></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">INNER_POINT</td><td><div class="descr"><div>see <a href="#i329" onclick="unfold('span:i329');">SchlegelDiagram::INNER_POINT</a></div></div></td></tr></table></div></div></div></li></ul></div></div></div></li></ul></div></div>

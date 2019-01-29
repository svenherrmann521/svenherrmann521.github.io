<div xmlns:html="http://www.w3.org/1999/xhtml" xmlns:pm="http://www.polymake.de/ns/docs#3" id="content"><h1>application: tropical</h1><div class="descr"><p> This application concentrates on tropical hypersurfaces and tropical polytopes.
 It provides the functionality for the computation of basic properties. Visualization and various constructions are possible.</p></div><br/><b>imports from: </b><a href="common.html">common</a>, <a href="graph.html">graph</a><br/><b>uses: </b><a href="fan.html">fan</a>, <a href="group.html">group</a>, <a href="polytope.html">polytope</a>, <a href="topaz.html">topaz</a><br/><div class="level2"><h2><b>Objects</b></h2><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i10" onclick="swap_content('span:i10'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i10" onclick="swap_content('span:i10'); return false;"><span class="object">TropicalHypersurface</span></a></h3></div><div style="display: inline" id="span:i10" class="foldit"><div class="descr"><p> A tropical hypersurface is the set of points in the tropical (d-1)-torus for which
 the minimum of a tropical polynomial is attained at least twice. It is
 given as a list of <a href="#i60" onclick="unfold('span:i60');">MONOMIALS</a> and <a href="#i61" onclick="unfold('span:i61');">COEFFICIENTS</a>.  Currently polymake supports
 tropical hypersurfaces given by a homogeneous polynomial only!</p><p> Throughout this hypersurface is seen as a polyhedral complex in R<sup>d-1</sup>. </p></div><div class="level3"/><h4>Properties of TropicalHypersurface</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i44" onclick="swap_content('span:i44'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i44" onclick="swap_content('span:i44'); return false;"><span class="category">Basic properties</span></a></h3></div><div style="display: inline" id="span:i44" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i55" onclick="swap_content('span:i55'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i55" onclick="swap_content('span:i55'); return false;"><b>AMBIENT_DIM</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i55" class="foldit"><div class="descr"><p> Dimension of the tropical projective space containing the hypersurface.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i61" onclick="swap_content('span:i61'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i61" onclick="swap_content('span:i61'); return false;"><b>COEFFICIENTS</b>:
		</a><a href="common.html#i13" onclick="unfold('span:i13');">common::Vector&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i61" class="foldit"><div class="descr"><p> Coefficients of the (tropical) polynomial defining the hypersurface.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i63" onclick="swap_content('span:i63'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i63" onclick="swap_content('span:i63'); return false;"><b>DIM</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i63" class="foldit"><div class="descr"><p> Dimension of the affine hull of a maximal face of the hypersurface.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i56" onclick="swap_content('span:i56'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i56" onclick="swap_content('span:i56'); return false;"><b>MAXIMAL_FACES</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Set&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i56" class="foldit"><div class="descr"><p> Maximal faces of the hypersurface as a polyhedral complex.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i60" onclick="swap_content('span:i60'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i60" onclick="swap_content('span:i60'); return false;"><b>MONOMIALS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Int, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i60" class="foldit"><div class="descr"><p> Monomials of the (tropical) polynomial defining the hypersurface (Laurent polynomials are allowed.)
 The rows stands for the monomials, the columns for the variables. I.e., the entry in position (i,j) is the exponent of x<sub>j</sub> in the i-th monomial. </p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i62" onclick="swap_content('span:i62'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i62" onclick="swap_content('span:i62'); return false;"><b>N_MAXIMAL_FACES</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i62" class="foldit"><div class="descr"><p> Number of maximal faces.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i58" onclick="swap_content('span:i58'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i58" onclick="swap_content('span:i58'); return false;"><b>N_POINTS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i58" class="foldit"><div class="descr"><p> Number of <a href="#i54" onclick="unfold('span:i54');">POINTS</a> (vertices plus rays).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i57" onclick="swap_content('span:i57'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i57" onclick="swap_content('span:i57'); return false;"><b>N_RAYS</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i57" class="foldit"><div class="descr"><p> Number of <a href="#i59" onclick="unfold('span:i59');">RAYS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i65" onclick="swap_content('span:i65'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i65" onclick="swap_content('span:i65'); return false;"><b>N_VERTICES</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i65" class="foldit"><div class="descr"><p> Number of <a href="#i52" onclick="unfold('span:i52');">VERTICES</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i54" onclick="swap_content('span:i54'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i54" onclick="swap_content('span:i54'); return false;"><b>POINTS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i54" class="foldit"><div class="descr"><p> Points and rays of the hypersurface, vertices of the complex.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i59" onclick="swap_content('span:i59'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i59" onclick="swap_content('span:i59'); return false;"><b>RAYS</b>:
		</a><a href="common.html#i16" onclick="unfold('span:i16');">common::Set&lt;Int&gt;</a><br/><div style="display: inline" id="span:i59" class="foldit"><div class="descr"><p> Indices of the points that are rays.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i64" onclick="swap_content('span:i64'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i64" onclick="swap_content('span:i64'); return false;"><b>SUPPORT_SIZE</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i64" class="foldit"><div class="descr"><p> Number of <a href="#i60" onclick="unfold('span:i60');">MONOMIALS</a> and <a href="#i61" onclick="unfold('span:i61');">COEFFICIENTS</a>.</p></div></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of TropicalHypersurface</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i42" onclick="swap_content('span:i42'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i42" onclick="swap_content('span:i42'); return false;"><span class="category">Basic properties</span></a></h3></div><div style="display: inline" id="span:i42" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i51" onclick="swap_content('span:i51'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i51" onclick="swap_content('span:i51'); return false;"><b>min_attained</b></a>
			(x)  

			
				→ Array<div style="display: inline" id="span:i51" class="foldit"><br/><div class="descr_func"><div class="descr"><p> List the <a href="#i60" onclick="unfold('span:i60');">MONOMIALS</a> for which the minimum is attained.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>Scalar</td><td class="param">x</td><td><div class="descr"><div>the value at which the tropical polynomial is evaluated</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i52" onclick="swap_content('span:i52'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i52" onclick="swap_content('span:i52'); return false;"><b>VERTICES</b></a>
			()  

			<div style="display: inline" id="span:i52" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Vertices of the hypersurface.</p></div></div><div class="level3"/></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i41" onclick="swap_content('span:i41'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i41" onclick="swap_content('span:i41'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i41" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i50" onclick="swap_content('span:i50'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i50" onclick="swap_content('span:i50'); return false;"><b>VISUAL</b></a>
			()  

			
				→ Visual::TropicalHypersurface<div style="display: inline" id="span:i50" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualizes the tropical hypersurface.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::TropicalHypersurface</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul><h4>Permutations of TropicalHypersurface</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i43" onclick="swap_content('span:i43'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i43" onclick="swap_content('span:i43'); return false;"><b>MonomPerm</b></a><div style="display: inline" id="span:i43" class="foldit"><div class="undoc"><p>UNDOCUMENTED</p></div><h4>Properties of MonomPerm</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i84" onclick="swap_content('span:i84'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i84" onclick="swap_content('span:i84'); return false;"><b>PERMUTATION</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i84" class="foldit"><div class="descr"><p> Transforming <a href="#i60" onclick="unfold('span:i60');">MONOMIALS</a> from this into basic object</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i45" onclick="swap_content('span:i45'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i45" onclick="swap_content('span:i45'); return false;"><b>PointsPerm</b></a><div style="display: inline" id="span:i45" class="foldit"><div class="undoc"><p>UNDOCUMENTED</p></div><h4>Properties of PointsPerm</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i85" onclick="swap_content('span:i85'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i85" onclick="swap_content('span:i85'); return false;"><b>PERMUTATION</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i85" class="foldit"><div class="descr"><p> Transforming <a href="#i52" onclick="unfold('span:i52');">VERTICES</a> from this into basic object</p></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i11" onclick="swap_content('span:i11'); return false;">
		 	
	</div><div class="unfoldable"><div class="object"><h3><a href="#" class="javalink" id="i11" onclick="swap_content('span:i11'); return false;"><span class="object">TropicalPolytope</span></a></h3></div><div style="display: inline" id="span:i11" class="foldit"><div class="descr"><p> Tropical convex hull of finitely many points in the tropical (d-1)-torus, as introduced by Develin and Sturmfels.
 One construction is via the bounded subcomplex of an unbounded ordinary convex polyhedron.</p></div><div class="level3"/><h4>Properties of TropicalPolytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i49" onclick="swap_content('span:i49'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i49" onclick="swap_content('span:i49'); return false;"><span class="category">Basic properties</span></a></h3></div><div style="display: inline" id="span:i49" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i75" onclick="swap_content('span:i75'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i75" onclick="swap_content('span:i75'); return false;"><b>AMBIENT_DIM</b>:
		</a><a href="common.html#i58" onclick="unfold('span:i58');">common::Int</a><br/><div style="display: inline" id="span:i75" class="foldit"><div class="descr"><p> Dimension of the tropical projective space which contains the tropical polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i81" onclick="swap_content('span:i81'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i81" onclick="swap_content('span:i81'); return false;"><b>CONVEX_HULL_2D_CYCLIC</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i81" class="foldit"><div class="descr"><p> Cyclic order of the <a href="#i73" onclick="unfold('span:i73');">PSEUDOVERTICES</a> in the boundary (for dimension 2 only).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i77" onclick="swap_content('span:i77'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i77" onclick="swap_content('span:i77'); return false;"><b>ENVELOPE</b>:
		</a><a href="polytope.html#i38" onclick="unfold('span:i38');">polytope::Polytope&lt;Scalar&gt;</a><br/><div style="display: inline" id="span:i77" class="foldit"><div class="descr"><p> Tropical polytopes have a natural description as the complex of bounded faces of their envelopes.
 This envelope depends on the choice of the <a href="#i74" onclick="unfold('span:i74');">POINTS</a> that generate the tropical polytope.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i80" onclick="swap_content('span:i80'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i80" onclick="swap_content('span:i80'); return false;"><b>HALF_SPACES</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Pair&lt;Vector&lt;Scalar&gt;, Set&lt;Int&gt;&gt;&gt;</a><br/><div style="display: inline" id="span:i80" class="foldit"><div class="descr"><p> Tropical halfspaces encoded as pairs of apices and sets of sectors.
 Maybe redundant (for now; subject to change in the future).</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i74" onclick="swap_content('span:i74'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i74" onclick="swap_content('span:i74'); return false;"><b>POINTS</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i74" class="foldit"><div class="descr"><p> Input points in homogeneous coordinates.  This is the fixed system of generators with respect
 to which many combinatorial properties are expressed.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i82" onclick="swap_content('span:i82'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i82" onclick="swap_content('span:i82'); return false;"><b>PSEUDOVERTEX_COARSE_TYPES</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Array&lt;Int&gt;&gt;</a><br/><div style="display: inline" id="span:i82" class="foldit"><div class="descr"><p> Coarse types of <a href="#i73" onclick="unfold('span:i73');">PSEUDOVERTICES</a> relative to <a href="#i74" onclick="unfold('span:i74');">POINTS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i76" onclick="swap_content('span:i76'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i76" onclick="swap_content('span:i76'); return false;"><b>PSEUDOVERTEX_LABELS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a><br/><div style="display: inline" id="span:i76" class="foldit"><div class="descr"><p> Unique names assigned to the <a href="#i73" onclick="unfold('span:i73');">PSEUDOVERTICES</a>.
 Can be used as "NodeLabels" in <a href="#i69" onclick="unfold('span:i69');">VISUAL_PLANAR</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i72" onclick="swap_content('span:i72'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i72" onclick="swap_content('span:i72'); return false;"><b>PSEUDOVERTEX_TYPES</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Array&lt;Set&lt;Int&gt;&gt;&gt;</a><br/><div style="display: inline" id="span:i72" class="foldit"><div class="descr"><p> Types of <a href="#i73" onclick="unfold('span:i73');">PSEUDOVERTICES</a> relative to <a href="#i74" onclick="unfold('span:i74');">POINTS</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i73" onclick="swap_content('span:i73'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i73" onclick="swap_content('span:i73'); return false;"><b>PSEUDOVERTICES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i73" class="foldit"><div class="descr"><p> Pseudovertices are the vertices of the <a href="#i77" onclick="unfold('span:i77');">ENVELOPE</a> (with respect to <a href="#i74" onclick="unfold('span:i74');">POINTS</a>).
 original: property PSEUDOVERTICES : Matrix&lt;Scalar&gt;;</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i79" onclick="swap_content('span:i79'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i79" onclick="swap_content('span:i79'); return false;"><b>VERTEX_LABELS</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;String&gt;</a><br/><div style="display: inline" id="span:i79" class="foldit"><div class="descr"><p> Unique names assigned to the <a href="#i78" onclick="unfold('span:i78');">VERTICES</a>.
 If specified, they are shown by visualization tools instead of vertex indices.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i83" onclick="swap_content('span:i83'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i83" onclick="swap_content('span:i83'); return false;"><b>VERTEX_TYPES</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Array&lt;Set&lt;Int&gt;&gt;&gt;</a><br/><div style="display: inline" id="span:i83" class="foldit"><div class="descr"><p> Types of <a href="#i78" onclick="unfold('span:i78');">VERTICES</a> relative to <a href="#i78" onclick="unfold('span:i78');">VERTICES</a>.</p></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i78" onclick="swap_content('span:i78'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i78" onclick="swap_content('span:i78'); return false;"><b>VERTICES</b>:
		</a><a href="common.html#i31" onclick="unfold('span:i31');">common::Matrix&lt;Scalar, NonSymmetric&gt;</a><br/><div style="display: inline" id="span:i78" class="foldit"><div class="descr"><p> Vertices of the tropical convex hull in homogeneous coordinates:
 We normalize by setting the first homogeneous coordinate to zero.</p></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i48" onclick="swap_content('span:i48'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i48" onclick="swap_content('span:i48'); return false;"><span class="category">Combinatorics</span></a></h3></div><div style="display: inline" id="span:i48" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i71" onclick="swap_content('span:i71'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i71" onclick="swap_content('span:i71'); return false;"><b>PSEUDOVERTEX_GRAPH</b>:
		</a><a href="graph.html#i15" onclick="unfold('span:i15');">graph::Graph&lt;Undirected&gt;</a><br/><div style="display: inline" id="span:i71" class="foldit"><div class="descr"><p> Tropical polytopes have a natural description as ordinary polytopal complexes. This is the 1-skeleton of such a
 complex.</p></div></div></div></div></li></ul></div></div></div></li></ul><h4>User Methods of TropicalPolytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i46" onclick="swap_content('span:i46'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i46" onclick="swap_content('span:i46'); return false;"><span class="category">Visualization</span></a></h3></div><div style="display: inline" id="span:i46" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i67" onclick="swap_content('span:i67'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i67" onclick="swap_content('span:i67'); return false;"><b>VISUAL</b></a>
			()  

			
				→ Visual::TropicalPolytope<div style="display: inline" id="span:i67" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the tropical polytope.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td>option list:</td><td>Visual::Polygons::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::TropicalPolytope</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i69" onclick="swap_content('span:i69'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i69" onclick="swap_content('span:i69'); return false;"><b>VISUAL_PLANAR</b></a>
			()  

			
				→ Visual::TropicalPolytope<div style="display: inline" id="span:i69" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the tropical polytope projected onto the plane.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">Directions</td><td><div class="descr"><div>directions to project onto</div></div></td></tr><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::TropicalPolytope</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i68" onclick="swap_content('span:i68'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i68" onclick="swap_content('span:i68'); return false;"><b>VISUAL_PSEUDOVERTEX_GRAPH</b></a>
			()  

			
				→ Visual::TropicalPolytope<div style="display: inline" id="span:i68" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Visualize the <a href="#i71" onclick="unfold('span:i71');">PSEUDOVERTEX_GRAPH</a> of a tropical polytope.</p></div></div><div class="level3"><h5>Options</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">seed</td><td><div class="descr"><div>random seed value for the string embedder</div></div></td></tr><tr><td>option list:</td><td>Visual::Graph::decorations</td></tr></table><h5>Returns</h5><table class="args"><tr><td>Visual::TropicalPolytope</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul><h4>Permutations of TropicalPolytope</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i47" onclick="swap_content('span:i47'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i47" onclick="swap_content('span:i47'); return false;"><b>PseudoVertexPerm</b></a><div style="display: inline" id="span:i47" class="foldit"><div class="undoc"><p>UNDOCUMENTED</p></div><h4>Properties of PseudoVertexPerm</h4><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i86" onclick="swap_content('span:i86'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i86" onclick="swap_content('span:i86'); return false;"><b>PERMUTATION</b>:
		</a><a href="common.html#i28" onclick="unfold('span:i28');">common::Array&lt;Int&gt;</a><br/><div style="display: inline" id="span:i86" class="foldit"><div class="descr"><p> transforming <a href="#i73" onclick="unfold('span:i73');">PSEUDOVERTICES</a> from this into basic object</p></div></div></div></div></li></ul></div></div></div></li></ul></div></div></div></li></ul></div><div class="level2"><h2>User Functions</h2><ul class="unfoldable"><li><div class="li"><div class="icon" id="icon:i5" onclick="swap_content('span:i5'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i5" onclick="swap_content('span:i5'); return false;"><span class="category">Constructing a polyhedral complex</span></a></h3></div><div style="display: inline" id="span:i5" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i15" onclick="swap_content('span:i15'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i15" onclick="swap_content('span:i15'); return false;"><b>tropical_complex</b></a>
			(points)  

			
				→ PolyhedralComplex<div style="display: inline" id="span:i15" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the tropical complex of <em class="param">points</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td>PolyhedralComplex</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i16" onclick="swap_content('span:i16'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i16" onclick="swap_content('span:i16'); return false;"><b>tropical_intersection</b></a>
			(pc1, pc2)  

			
				→ fan::PolyhedralComplex<div style="display: inline" id="span:i16" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the intersection of two polyhedral complexes.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="fan.html#i9" onclick="unfold('span:i9');">fan::PolyhedralComplex</a></td><td class="param">pc1</td><td/></tr><tr><td><a href="fan.html#i9" onclick="unfold('span:i9');">fan::PolyhedralComplex</a></td><td class="param">pc2</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="fan.html#i9" onclick="unfold('span:i9');">fan::PolyhedralComplex</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i6" onclick="swap_content('span:i6'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i6" onclick="swap_content('span:i6'); return false;"><span class="category">Other</span></a></h3></div><div style="display: inline" id="span:i6" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i25" onclick="swap_content('span:i25'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i25" onclick="swap_content('span:i25'); return false;"><b>check_minimality</b></a>
			(T, I, n)  

			
				→ Set<div style="display: inline" id="span:i25" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Checks the three criteria of Gaubert and Katz to be
 the type <em class="param">T</em> of an apex of a minimal tropical halfspace.
 It is assumed that the points that the type refers to are given by 0,...,<em class="param">n</em>-1
 and that the index set <em class="param">I</em> is a subset of 0,...,<em class="param">d</em>-1
 where <em class="param">d</em> is the <a href="#i75" onclick="unfold('span:i75');">AMBIENT_DIM</a> of the tropical polytope.
 If the input fulfills all criteria, the output set is empty.
 If the input doesn't fulfill the first criterion the whole set 0,...,<em class="param">d</em>-1 is given back.
 If the input doesn't fulfill the second and third criterion, then the violating indices are stored.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Set&gt;</a></td><td class="param">T</td><td/></tr><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set</a></td><td class="param">I</td><td/></tr><tr><td><a href="common.html#i33" onclick="unfold('span:i33');">Integer</a></td><td class="param">n</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i16" onclick="unfold('span:i16');">Set</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i20" onclick="swap_content('span:i20'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i20" onclick="swap_content('span:i20'); return false;"><b>coarse_types</b></a>
			(points, generators)  

			
				→ Array&lt; Array&lt;int&gt;&gt;<div style="display: inline" id="span:i20" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the coarse types of the <em class="param">points</em> set relative to a set of <em class="param">generators</em>.
  The following are two typical cases:
    (1) <em class="param">points</em> = <a href="#i78" onclick="unfold('span:i78');">VERTICES</a> and <em class="param">generators</em> = <a href="#i78" onclick="unfold('span:i78');">VERTICES</a>
    (2) <em class="param">points</em> = <a href="#i74" onclick="unfold('span:i74');">POINTS</a>  and <em class="param">generators</em> = <a href="#i73" onclick="unfold('span:i73');">PSEUDOVERTICES</a></p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">generators</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt; Array&lt;int&gt;&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i19" onclick="swap_content('span:i19'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i19" onclick="swap_content('span:i19'); return false;"><b>discard_non_vertices</b></a>
			(points)  

			
				→ Matrix<div style="display: inline" id="span:i19" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Given points in the tropical projective space, discard all the non-vertices of the tropical convex hull.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i24" onclick="swap_content('span:i24'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i24" onclick="swap_content('span:i24'); return false;"><b>extract_pseudovertices</b></a>
			(T, P)  

			<div style="display: inline" id="span:i24" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Get the pseudovertices of a tropical polytope <em class="param">T</em> from the bounded subcomplex of the corresponding unbounded polyhedron <em class="param">P</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">T</td><td/></tr><tr><td>Polytope</td><td class="param">P</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i17" onclick="swap_content('span:i17'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i17" onclick="swap_content('span:i17'); return false;"><b>nearest_point</b></a>
			(P, point)  

			
				→ Vector<div style="display: inline" id="span:i17" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the nearest point of a point <em class="param">x</em> in the tropical projective space onto a tropical polytope <em class="param">P</em>.
 Cf.
</p><blockquote><div>Develin &amp; Sturmfels math.MG/0308254v2, Proposition 9.</div></blockquote></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">P</td><td/></tr><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td class="param">point</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i13" onclick="unfold('span:i13');">Vector</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i26" onclick="swap_content('span:i26'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i26" onclick="swap_content('span:i26'); return false;"><b>pluecker</b></a>
			(V)  

			<div style="display: inline" id="span:i26" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute tropical Pluecker vector from matrix representing points in tropical torus.
 Can be used to lift regular subdivision of ordinary product of simplices to
 matroid decomposition of hypersimplices.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">V</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i23" onclick="swap_content('span:i23'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i23" onclick="swap_content('span:i23'); return false;"><b>points2hypersurface</b></a>
			(points)  

			
				→ TropicalHypersurface<div style="display: inline" id="span:i23" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Constructs a tropical hypersurface defined by the linear
 hypersurfaces associated to the points.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix&lt;Rational&gt;</a></td><td class="param">points</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">TropicalHypersurface</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i28" onclick="swap_content('span:i28'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i28" onclick="swap_content('span:i28'); return false;"><b>poly2trop</b></a>
			(P)  

			
				→ TropicalPolytope<div style="display: inline" id="span:i28" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Takes an ordinary convex polytope and interprets it in tropical projective space.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>Polytope</td><td class="param">P</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i21" onclick="swap_content('span:i21'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i21" onclick="swap_content('span:i21'); return false;"><b>pseudovertices2poly</b></a>
			(T)  

			
				→ Polytope<div style="display: inline" id="span:i21" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Takes a tropical polytope <em class="param">T</em> and interprets it in ordinary Euclidean space.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">T</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td>Polytope</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i27" onclick="swap_content('span:i27'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i27" onclick="swap_content('span:i27'); return false;"><b>pseudovertices_float_coords</b></a>
			(P)  

			
				→ Matrix&lt;Float&gt;<div style="display: inline" id="span:i27" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Return the pseudovertex coordinates dehomogenized and converted to Matrix&lt;Float&gt;;
 to be used as "Coord" for visualization.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">P</td><td><div class="descr"><div>source object</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix&lt;Float&gt;</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i22" onclick="swap_content('span:i22'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i22" onclick="swap_content('span:i22'); return false;"><b>trop2poly</b></a>
			(T)  

			
				→ Polytope<div style="display: inline" id="span:i22" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Given points in the tropical projective space, compute an ordinary unbounded polyhedron such that
 the tropical convex hull of the input is the bounded subcomplex of the latter.
 Cf.
    Develin &amp; Sturmfels math.MG/0308254v2, Lemma 22.</p><p> Warning: This client does not implement the reverse transformation to <a href="#i28" onclick="unfold('span:i28');">poly2trop</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">T</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td>Polytope</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i18" onclick="swap_content('span:i18'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i18" onclick="swap_content('span:i18'); return false;"><b>types</b></a>
			(points, generators)  

			
				→ Array&lt;Array&lt;Set&gt;&gt;<div style="display: inline" id="span:i18" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the fine types of the <em class="param">points</em> set relative to a set of <em class="param">generators</em>.
  The following are two typical cases:
    (1) <em class="param">points</em> = <a href="#i78" onclick="unfold('span:i78');">VERTICES</a> and <em class="param">generators</em> = <a href="#i78" onclick="unfold('span:i78');">VERTICES</a>
    (2) <em class="param">points</em> = <a href="#i74" onclick="unfold('span:i74');">POINTS</a>  and <em class="param">generators</em> = <a href="#i73" onclick="unfold('span:i73');">PSEUDOVERTICES</a></p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">generators</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Array&lt;Set&gt;&gt;</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i7" onclick="swap_content('span:i7'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i7" onclick="swap_content('span:i7'); return false;"><span class="category">Others</span></a></h3></div><div style="display: inline" id="span:i7" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i29" onclick="swap_content('span:i29'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i29" onclick="swap_content('span:i29'); return false;"><b>get_corners</b></a>
			(input)  

			
				→ Matrix<div style="display: inline" id="span:i29" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the corners of a tropical polytope given by its vertices.
 Cf.
    M. Joswig, arXiv:0809.4694v2, Lemma 17.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">input</td><td><div class="descr"><div>points</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i30" onclick="swap_content('span:i30'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i30" onclick="swap_content('span:i30'); return false;"><b>tropical_matroid_polytope</b></a>
			(m, v)  

			
				→ TropicalPolytope<div style="display: inline" id="span:i30" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce the tropical matroid polytope from a matroid <em class="param">m</em>.
 Each vertex corresponds to a basis of the matroid,
 the non-bases coordinates get value 0, the bases coordinates
 gets value <em class="param">v</em>, default is -1.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="matroid.html#i8" onclick="unfold('span:i8');">matroid::Matroid</a></td><td class="param">m</td><td/></tr><tr><td><a href="common.html#i60" onclick="unfold('span:i60');">Rational</a></td><td class="param">v</td><td><div class="descr"><div>value for the bases</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i8" onclick="swap_content('span:i8'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i8" onclick="swap_content('span:i8'); return false;"><span class="category">Producing a new tropical polytope from another</span></a></h3></div><div style="display: inline" id="span:i8" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i31" onclick="swap_content('span:i31'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i31" onclick="swap_content('span:i31'); return false;"><b>cornered_hull</b></a>
			(T)  

			
				→ TropicalPolytope<div style="display: inline" id="span:i31" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the cornered hull of a tropical polytope.
 Cf.
    M. Joswig, arXiv:0809.4694v2, Lemma 17.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">T</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i32" onclick="swap_content('span:i32'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i32" onclick="swap_content('span:i32'); return false;"><b>cornered_hull_poly</b></a>
			(T)  

			
				→ Polytope<div style="display: inline" id="span:i32" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Compute the cornered hull of a tropical polytope.
 Cf.
    M. Joswig, arXiv:0809.4694v2, Lemma 17.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">T</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td>Polytope</td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i33" onclick="swap_content('span:i33'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i33" onclick="swap_content('span:i33'); return false;"><b>dualize</b></a>
			(points, generators)  

			
				→ Matrix<div style="display: inline" id="span:i33" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Dualizes a point set with respect to the generators of a tropical polytope.
 The points are dualized with respect to the (rows of the) matrix of the generators.
 Cf.
    Develin &amp; Sturmfels, Tropical Convexity, Lemma 22.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">points</td><td/></tr><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td class="param">generators</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i31" onclick="unfold('span:i31');">Matrix</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i34" onclick="swap_content('span:i34'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i34" onclick="swap_content('span:i34'); return false;"><b>minkowski_sum</b></a>
			(lambda, P, mu, Q)  

			
				→ TropicalPolytope<div style="display: inline" id="span:i34" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produces the tropical polytope <em class="param">lambda</em>*<em class="param">P</em>+<em class="param">mu</em>*<em class="param">Q</em>, where * and + are tropical scalar multiplication
 and tropical addition, respectively.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>Scalar</td><td class="param">lambda</td><td/></tr><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">P</td><td/></tr><tr><td>Scalar</td><td class="param">mu</td><td/></tr><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">Q</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i4" onclick="swap_content('span:i4'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i4" onclick="swap_content('span:i4'); return false;"><span class="category">Producing from scratch</span></a></h3></div><div style="display: inline" id="span:i4" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i13" onclick="swap_content('span:i13'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i13" onclick="swap_content('span:i13'); return false;"><b>cyclic</b></a>
			(d, n)  

			
				→ TropicalPolytope<div style="display: inline" id="span:i13" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produces a tropical cyclic <em class="param">d</em>-polytope with <em class="param">n</em> vertices.
 Cf.
    Josephine Yu &amp; Florian Block, arXiv: math.MG/0503279.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>int</td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr><tr><td>int</td><td class="param">n</td><td><div class="descr"><div>the number of generators</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td/></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i14" onclick="swap_content('span:i14'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i14" onclick="swap_content('span:i14'); return false;"><b>hypersimplex</b></a>
			(k, d)  

			
				→ TropicalPolytope<div style="display: inline" id="span:i14" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Produce the tropical hypersimplex Δ(<em class="param">k</em>,<em class="param">d</em>).
 Cf.
    M. Joswig math/0312068v3, Ex. 2.10.
 The value of <em class="param">k</em> defaults to 1, yielding a tropical standard simplex.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>int</td><td class="param">k</td><td><div class="descr"><div>the number of -1 entries</div></div></td></tr><tr><td>int</td><td class="param">d</td><td><div class="descr"><div>the dimension</div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li><li><div class="li"><div class="icon" id="icon:i9" onclick="swap_content('span:i9'); return false;">
		 	
	</div><div class="unfoldable"><div class="category"><h3><a href="#" class="javalink" id="i9" onclick="swap_content('span:i9'); return false;"><span class="category">Tropical convex hulls</span></a></h3></div><div style="display: inline" id="span:i9" class="foldit"><ul><li><div class="li"><div class="icon" id="icon:i36" onclick="swap_content('span:i36'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i36" onclick="swap_content('span:i36'); return false;"><b>ch2d_3phases</b></a>
			(n, Types, G)  

			
				→ Array&lt;int&gt;<div style="display: inline" id="span:i36" class="foldit"><br/><div class="descr_func"><div class="descr"><p> List the pseudovertices of a 2d tropical polytope on the boundary
 in counter-clockwise cyclic order.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="common.html#i58" onclick="unfold('span:i58');">Int</a></td><td class="param">n</td><td><div class="descr"><div>the number of generators</div></div></td></tr><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;Array&lt;Set&gt;&gt;</a></td><td class="param">Types</td><td><div class="descr"><div>the types of the generators</div></div></td></tr><tr><td><a href="graph.html#i13" onclick="unfold('span:i13');">Graph</a></td><td class="param">G</td><td><div class="descr"><div>the <a href="#i71" onclick="unfold('span:i71');">PSEUDOVERTEX_GRAPH</a></div></div></td></tr></table><h5>Returns</h5><table class="args"><tr><td><a href="common.html#i28" onclick="unfold('span:i28');">Array&lt;int&gt;</a></td><td><div class="descr"><div>the pseudovertices on the boundary</div></div></td></tr></table></div></div></div></div></li><li><div class="li"><div class="icon" id="icon:i35" onclick="swap_content('span:i35'); return false;">
		 	
	</div><div class="unfoldable"><a href="#" class="javalink" id="i35" onclick="swap_content('span:i35'); return false;"><b>minimal_tropical_halfspaces</b></a>
			(T)  

			
				→ hash_set&lt; Pair&lt;Vector&lt;Coord&gt;,Set&lt;Int&gt; &gt; &gt;<div style="display: inline" id="span:i35" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Computes the minimal tropical halfspaces of a
 tropical polytope <em class="param">T</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i11" onclick="unfold('span:i11');">TropicalPolytope</a></td><td class="param">T</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td>hash_set&lt; Pair&lt;Vector&lt;Coord&gt;,Set&lt;Int&gt; &gt; &gt;</td><td/></tr></table></div></div></div></div></li></ul></div></div></div></li></ul></div></div>

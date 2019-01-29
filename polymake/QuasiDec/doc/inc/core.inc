<div xmlns:html="http://www.w3.org/1999/xhtml" xmlns:pm="http://www.polymake.de/ns/docs#3" id="content">
  <h1>core functionality</h1>
  <div class="descr">
    <div>Core functionality available in all applications.</div>
  </div>
  <br/>
  <div class="level2">
    <h2>User Functions</h2>
    <ul class="unfoldable">
      <li>
        <div class="li">
          <div class="icon" id="icon:i80" onclick="swap_content('span:i80'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="category">
              <h3>
                <a href="#" class="javalink" id="i80" onclick="swap_content('span:i80'); return false;">
                  <span class="category">Basic</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i80" class="foldit">
              <div class="descr">
                <p> These functions are part of the core user interface.
 They are available in both scripting and interactive modes.</p>
              </div>
              <ul>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i255" onclick="swap_content('span:i255'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i255" onclick="swap_content('span:i255'); return false;"><b>application</b></a>
			(name)  

			<div style="display: inline" id="span:i255" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Called in void context sets the current application to the one given by <em class="param">name</em>
 (loading its rules if necessary) or by an object of type <code>Polymake::Core::Application</code>.</p><p> Called in non-void context loads the application if necessary and returns the <code>Application</code>
 object representing it, but does not make it the current application.</p><p> Finally, if called without arguments, just returns the current <code>Application</code> object,
 which is also always available in the variable <code>$application</code>.
 Say <code>print $application-&gt;name;</code> to see its name.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">name</td><td><div class="descr"><div>| Application app_obj</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i250" onclick="swap_content('span:i250'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i250" onclick="swap_content('span:i250'); return false;"><b>disable_rules</b></a>
			(pattern, object_type)  

			<div style="display: inline" id="span:i250" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Temporarily disable production rules matching given pattern.
 Rules are re-enabled after the complete execution of the current script
 or input expression in interactive mode.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">pattern</td><td><div class="descr"><div>: either a label (see <a href="#i253" onclick="unfold('span:i253');">prefer</a>) or a rule header.
        The rule header must exactly match the definition in the rulefile,
        up to white spaces around property names.  If several rules have
        headers matching the pattern, they all will be disabled even if they
        differ in precoditions, weights, or other attributes.</div></div></td></tr><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">object_type</td><td><div class="descr"><div>: optionally constrain the search of matching rules to those
        applicable to the given object type.
        Instead of a type name you can also pass an ObjectType instance, e.g. as <code>$obj-&gt;type</code>.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i254" onclick="swap_content('span:i254'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i254" onclick="swap_content('span:i254'); return false;"><b>include</b></a>
			(rulefile)  

			<div style="display: inline" id="span:i254" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Read additional rule files, interpret them in the context of the current application.
 The rule files may reside in the application's standard subdirectory <code>rules</code> or in any
 of the known extensions.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">rulefile</td><td><div class="descr"><div>: one or more filenames.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i262" onclick="swap_content('span:i262'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i262" onclick="swap_content('span:i262'); return false;"><b>load</b></a>
			(filename)  

			
				→ Object<div style="display: inline" id="span:i262" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Read the object data file.
 If the data file is in old plain ASCII format and does not contain a type declaration,
 the default type of the current application is assumed.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">filename</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td>Object</td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i261" onclick="swap_content('span:i261'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i261" onclick="swap_content('span:i261'); return false;"><b>load_data</b></a>
			(filename)  

			
				→ any<div style="display: inline" id="span:i261" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Read the data file created earlier by <a href="#i258" onclick="unfold('span:i258');">save_data</a> and return the data object stored there.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">filename</td><td/></tr></table><h5>Returns</h5><table class="args"><tr><td>any</td><td><div class="descr"><div>data object; in list context additionally returns the optional description read from in the file.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i253" onclick="swap_content('span:i253'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i253" onclick="swap_content('span:i253'); return false;"><b>prefer</b></a>
			(label_expression)  

			<div style="display: inline" id="span:i253" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Make the production rules, user functions, or methods (further called <em class="param">items</em>)
 matching the given <em class="param">label_expression</em> be preferred over competing rules (functions, methods).</p><p> The new preference list is also saved in your personal file <code>~/.polymake/prefer.pl</code>
 It remains active in all forthcoming sessions until you revoke it with another
 <em class="param">prefer</em> or <a href="#i251" onclick="unfold('span:i251');">reset_preference</a> command.</p><p> For the sake of symmetry you can call this function by its alias name <em class="param">set_preference</em>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">label_expression</td><td><div class="descr"><div>: may have one of the following forms:</div><div>   "top_label" or "top_label.sublevels"
      selects all items whose labels start with the given path,
      e.g. "javaview" or "cdd.convex_hull".</div><div>   "*.sublevels top_label_1, top_label_2 ... "
      selects all items with matching labels and establishes a ranking between them.
      For example, "*.convex_hull cdd,lrs" makes rules labeled with cdd.convex_hull
      and lrs.convex_hull preferred over all other convex hull rules,
      with cdd rules having the topmost rank.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i257" onclick="swap_content('span:i257'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i257" onclick="swap_content('span:i257'); return false;"><b>prefer_now</b></a>
			(label_expression)  

			<div style="display: inline" id="span:i257" class="foldit"><br/><div class="descr_func"><div class="descr"><p> The same as <a href="#i253" onclick="unfold('span:i253');">prefer</a>, but does not store the changes persistently.  The lifespan of the
 new preference order lasts up to the end of the current user cycle
 (that is, end of user script or interpretation of the current input line in interactive mode).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">label_expression</td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i256" onclick="swap_content('span:i256'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i256" onclick="swap_content('span:i256'); return false;"><b>reset_custom</b></a>
			(Variable)  

			<div style="display: inline" id="span:i256" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Reset the custom variable, array, hash, or hash element to the default value(s) as defined in the rule base
 and store it perpetually in your personal settings file <code>~/.polymake/customize.pl</code></p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>any</td><td class="param">Variable</td><td><div class="descr"><div>: following expressions are allowed:
  <code>$var;</code>
  <code>@array;</code>
  <code>%hash;</code>
  <code>$hash{key};</code></div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i251" onclick="swap_content('span:i251'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i251" onclick="swap_content('span:i251'); return false;"><b>reset_preference</b></a>
			(label_expression)  

			<div style="display: inline" id="span:i251" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Reset the matching preference lists to the default state.
 If there are matching preference lists declared in the rule files, they come back into effect;
 otherwise the preferences are neutralized, i.e. all competing items (rules/methods/etc.) get equal ranks.</p><p> This change is permanent, the former settings are wiped out from your preference file
 <code>~/.polymake/prefer.pl</code></p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">label_expression</td><td><div class="descr"><div>: "label" or "label.sublevels" or "*.sublevels" or "*" or "all"</div><div>   Two last forms match all preference lists visible from the current application.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i259" onclick="swap_content('span:i259'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i259" onclick="swap_content('span:i259'); return false;"><b>save</b></a>
			(object, filename)  

			<div style="display: inline" id="span:i259" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Store the given <em class="param">object</em> in a data file.</p><p> If <em class="param">filename</em> is specified, create the file with this name (or overwrite an existing one)
 and store the object there.</p><p> If <em class="param">filename</em> is omitted, write the object back to the file it was loaded from.
 If the object is not yet associated with a file (e.g. it was created with a <code>new</code> constructor)
 a new file is created, with the name consisting of the object name and the application-specific suffix.
 If the object name is empty, you will be asked for it.  In non-interactive mode an artificial name
 of the form <code>ObjectType_NNN</code> will be generated, where <code>NNN</code> is an ordinal number.</p><p> The save operation is only performed if the boolean attribute <code>object-&gt;changed</code> has the true value.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>Object</td><td class="param">object</td><td/></tr><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">filename</td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i258" onclick="swap_content('span:i258'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i258" onclick="swap_content('span:i258'); return false;"><b>save_data</b></a>
			(data, filename, description)  

			<div style="display: inline" id="span:i258" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Create an XML data file and store the given data object there, together with an optional description.
 Only objects of complex types declared as <code>property_type</code> can be stored this way.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>any</td><td class="param">data</td><td><div class="descr"><div>object</div></div></td></tr><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">filename</td><td/></tr><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">description</td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i252" onclick="swap_content('span:i252'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i252" onclick="swap_content('span:i252'); return false;"><b>script</b></a>
			(filename, Arguments)  

			<div style="display: inline" id="span:i252" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Run the polymake script, passing the arguments in <code>@ARGV</code>.
 The scripts specified without path are first looked for in the current application's <code>scripts</code> subdirectory,
 then in the user's script directories (custom array <code>@lookup_scripts</code>), and finally in the
 top-level <code>scripts</code> subdirectory.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">filename</td><td><div class="descr"><div>: script code</div></div></td></tr><tr><td>any</td><td class="param">Arguments</td><td><div class="descr"><div>: arbitrary many arguments passed to the script</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i260" onclick="swap_content('span:i260'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i260" onclick="swap_content('span:i260'); return false;"><b>set_custom</b></a>
			(assignment)  

			<div style="display: inline" id="span:i260" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Set the custom variable, array, hash, or hash element to a new value and store it perpetually
 in your personal settings file <code>~/.polymake/customize.pl</code></p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td>any</td><td class="param">assignment</td><td><div class="descr"><div>: following expressions are allowed:
  <code>$var=value;</code>
  <code>@array=(values);</code>
  <code>%hash=( key =&gt; value, ... );</code>
  <code>$hash{key}=value;</code></div></div></td></tr></table></div></div></div>
                  </div>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </li>
      <li>
        <div class="li">
          <div class="icon" id="icon:i78" onclick="swap_content('span:i78'); return false;">
		 	
	</div>
          <div class="unfoldable">
            <div class="category">
              <h3>
                <a href="#" class="javalink" id="i78" onclick="swap_content('span:i78'); return false;">
                  <span class="category">Interactive</span>
                </a>
              </h3>
            </div>
            <div style="display: inline" id="span:i78" class="foldit">
              <div class="descr">
                <p> These functions are available in the interactive shell only.</p>
              </div>
              <ul>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i234" onclick="swap_content('span:i234'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i234" onclick="swap_content('span:i234'); return false;"><b>apropos</b></a>
			(pattern)  

			<div style="display: inline" id="span:i234" class="foldit"><br/><div class="descr_func"><div class="descr"><p> List all help topics matching the given pattern.  bash-like syntax for wildcards is supported.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">pattern</td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i225" onclick="swap_content('span:i225'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i225" onclick="swap_content('span:i225'); return false;"><b>export_configured</b></a>
			(filename, merge_with_global)  

			<div style="display: inline" id="span:i225" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Saves all custom variables having non-defalt values in a file.
 This includes all results of automatical or manual rule configuration.
 The obtained file can be edited manually, if needed, and used as a global configuration
 source (see also <a href="http://polymake.org//howto/configure" onclick="unfold('span:');">How to configure polymake for a group of users</a>).</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">filename</td><td><div class="descr"><div>: where to store the settings</div></div></td></tr><tr><td><a href="#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">merge_with_global</td><td><div class="descr"><div>if TRUE, the settings inherited from *your* global configuration
             will be included in the resulting file as well.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i231" onclick="swap_content('span:i231'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i231" onclick="swap_content('span:i231'); return false;"><b>forget_extension</b></a>
			(path)  

			<div style="display: inline" id="span:i231" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Removes all references to the specified extension, so that the <em class="param">following</em> polymake session won't load anything from it.
 Beware that in the <em class="param">current</em> session all the rules and functions defined in the extension remain active!
 Therefore it's strongly recommended to quit the current session right after executing this command.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">path</td><td><div class="descr"><div>: URI or top-level directory of the extension.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i223" onclick="swap_content('span:i223'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i223" onclick="swap_content('span:i223'); return false;"><b>found_application</b></a>
			(name, path)  

			<div style="display: inline" id="span:i223" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Create a directory tree for a new application, rooted at the given extension.  The <code>apps</code> and <code>build</code> subtrees
 are created unterneath if necessary.  If it's the first application being created or extended there, the <em class="param">path</em> will be inserted
 in the custom list <code>@lookup_applications</code>.</p><p> The new application is neither loaded at this moment, nor it is inserted in the <code>@start_applications</code> list.
 Both must be done manually at the appropriate time.</p><p> A new core application can be created by entering the string "core" instead of the <em class="param">path</em> argument.
 This option is only available in developer's mode, i.e. when polymake is invoked from the SVN copy of the source tree.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">name</td><td><div class="descr"><div>: new application's name</div></div></td></tr><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">path</td><td><div class="descr"><div>: top-level directory of the new or existing extension.
   By default, the first writeable directory listed in <code>@lookup_applications</code> will be taken.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i224" onclick="swap_content('span:i224'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i224" onclick="swap_content('span:i224'); return false;"><b>found_extension</b></a>
			(path)  

			<div style="display: inline" id="span:i224" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Found the extension for the current application rooted at the given directory.  The <code>apps</code> and <code>build</code> subtrees
 are created unterneath if necessary.  If it's the first application being created or extended there, the <em class="param">path</em> will be inserted
 in the custom list <code>@lookup_applications</code>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">path</td><td><div class="descr"><div>: top-level directory of the extension.
   By default, the first writeable directory listed in <code>@lookup_applications</code> will be taken.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i233" onclick="swap_content('span:i233'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i233" onclick="swap_content('span:i233'); return false;"><b>help</b></a>
			(item)  

			<div style="display: inline" id="span:i233" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Display the help information or comments associated with a given item.</p><p> If a single word without path separators <code>/</code> is given, it is looked for
 in the entire help hierarchy.
 If there are more than 5 matches, the corresponding help commands with full paths
 are generated and placed into the shell history buffer, so you can choose the themes
 of interest using the standard history navigation (arrow up/down keys).</p><p> You may use TAB completion to navigate thru the category tree.
 Start with '/' to see the description of the current application.
 Descend via 'functions', 'objects', 'types', or 'preferences' to the topics
 of interest.  If you stop in an intermediate category level, both the comment
 specific to this category and the list of subtopics will be displayed.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">item</td><td><div class="descr"><div>: "word" | "category/subcategory/.../item"</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i222" onclick="swap_content('span:i222'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i222" onclick="swap_content('span:i222'); return false;"><b>history</b></a>
			()  

			<div style="display: inline" id="span:i222" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Let you choose and edit the commands typed earlier in the interactive shell.
 The complete history list is written in a temporary file, which is opened with a text editor.
 Until you store your favorite editor in the custom variable <code>$history_editor</code>,
 the values of environment variables <code>VISUAL</code> and <code>EDITOR</code> are consulted.</p></div></div><div class="level3"/></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i227" onclick="swap_content('span:i227'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i227" onclick="swap_content('span:i227'); return false;"><b>import_extension</b></a>
			(path)  

			<div style="display: inline" id="span:i227" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Load the extension installed in the given directory. The <em class="param">path</em> is also included in the custom list <code>@lookup_applications</code>
 for future sessions.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">path</td><td><div class="descr"><div>: top-level directory of the extension.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i229" onclick="swap_content('span:i229'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i229" onclick="swap_content('span:i229'); return false;"><b>load_commands</b></a>
			(filename)  

			<div style="display: inline" id="span:i229" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Read the lines from the given file, filter out comments and empty lines, append them to the
 history list of the interactive shell, and enter the replay mode (see <a href="#i235" onclick="unfold('span:i235');">replay_history</a>) starting
 at the first inserted line.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">filename</td><td/></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i220" onclick="swap_content('span:i220'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i220" onclick="swap_content('span:i220'); return false;"><b>reconfigure</b></a>
			(rulefile)  

			<div style="display: inline" id="span:i220" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Repeats the auto-configuration routines stored in the given rulefile, possibly asking for program paths, options, etc.
 If the configuration succeeds, and the rulefile wasn't configured until now, it will be loaded.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">rulefile</td><td><div class="descr"><div>: name of the rulefile, optionally prefixed with "application::" if it does not belong to the current application.</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i235" onclick="swap_content('span:i235'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i235" onclick="swap_content('span:i235'); return false;"><b>replay_history</b></a>
			()  

			<div style="display: inline" id="span:i235" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Bring the interactive shell in the replay mode.  In this mode you can revisit, edit and execute the commands stored in the history.
 Simply press RETURN if you want to execute the command as is; alternatively you can edit it or jump over it using the
 usual history navigation keystrokes.  The replay mode is switched off when the last history line has been executed or navigated over.
 You can leave it prematurely by entering Control-C as well.
 The replay mode is visually signaled by the history line number in square brackets displayed in the shell prompt.</p></div></div><div class="level3"/></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i230" onclick="swap_content('span:i230'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i230" onclick="swap_content('span:i230'); return false;"><b>save_history</b></a>
			(filename)  

			<div style="display: inline" id="span:i230" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Saves the commands entered in the current and recent sessions in the file.
 Polymake does it automatically at the end of each interactive session; this command is provided
 for the case that you might want to store the commands in an alternative file and/or don't want to
 exit the session.
 Commands can be loaded using <a href="#i229" onclick="unfold('span:i229');">load_commands</a>.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">filename</td><td><div class="descr"><div>: defaults to ~/.polymake/history</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i221" onclick="swap_content('span:i221'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i221" onclick="swap_content('span:i221'); return false;"><b>show_credits</b></a>
			(brief)  

			<div style="display: inline" id="span:i221" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Prints the short descriptions of third-party software packages available from within polymake,
 including the copyright holders and project site URLs.
 Please note that here you will see only packages for which the polymake interface has been
 successfully configured; try <a href="#i228" onclick="unfold('span:i228');">show_unconfigured</a> command to see what's you currently missing.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i8" onclick="unfold('span:i8');">Bool</a></td><td class="param">brief</td><td><div class="descr"><div>: list the product names only, no descriptive text</div></div></td></tr></table></div></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i232" onclick="swap_content('span:i232'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i232" onclick="swap_content('span:i232'); return false;"><b>show_preferences</b></a>
			()  

			<div style="display: inline" id="span:i232" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Prints the currently active preference lists.</p></div></div><div class="level3"/></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i228" onclick="swap_content('span:i228'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i228" onclick="swap_content('span:i228'); return false;"><b>show_unconfigured</b></a>
			()  

			<div style="display: inline" id="span:i228" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Prints the names of all rulefiles visible from the current application,
 which could not be loaded because of configuration failures
 (in most cases, due to some lacking external software).
 You may use the command <a href="#i220" onclick="unfold('span:i220');">reconfigure</a> to load some of them if you have installed
 the required software and/or cleared other configuration questions.</p></div></div><div class="level3"/></div></div>
                  </div>
                </li>
                <li>
                  <div class="li">
                    <div class="icon" id="icon:i226" onclick="swap_content('span:i226'); return false;">
		 	
	</div>
                    <div class="unfoldable"><a href="#" class="javalink" id="i226" onclick="swap_content('span:i226'); return false;"><b>unconfigure</b></a>
			(rulefile)  

			<div style="display: inline" id="span:i226" class="foldit"><br/><div class="descr_func"><div class="descr"><p> Forgets the configuration made for the given rulefile and disables it for the <em class="param">following</em> polymake sessions.</p></div></div><div class="level3"><h5>Parameters</h5><table class="args"><tr><td><a href="#i10" onclick="unfold('span:i10');">String</a></td><td class="param">rulefile</td><td><div class="descr"><div>: name of the rulefile, optionally prefixed with "application::" if it does not belong to the current application.</div></div></td></tr></table></div></div></div>
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

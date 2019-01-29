<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:include href="report.xsl"/>
<xsl:include href="template.xsl"/> 

<xsl:template name="MODULE-CSS">
<!-- ###### Check it -->
	<!--<style type="text/css">@import url(<xsl:value-of select="$css_url"/>/gui_style.css);</style>	-->
	<style type="text/css">@import url(<xsl:value-of select="$css_url"/>/styles.css);</style>	
	<style type="text/css">@import url(<xsl:value-of select="$css_url"/>/styles_ext.css);</style>	
</xsl:template>

</xsl:stylesheet>
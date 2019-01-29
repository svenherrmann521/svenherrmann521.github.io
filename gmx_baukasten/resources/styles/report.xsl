<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format">

<xsl:template match="STATUS-MESSAGE[@TYPE='successful']">
	<xsl:call-template name="MODULE-CSS"/>
	<xsl:if test="MESSAGE">
		<table width="100%" class="statuses-success" style="margin-bottom: 10px; margin-top: 10px;">
			<tr>
				<td width="20">
					<img>
						<xsl:attribute name="src"><xsl:value-of select="$img_url"/>statuses-success.gif</xsl:attribute>
					</img>
				</td>
				<td>
					<span style="font-size: 8pt; color: #7C7C7C;"><xsl:apply-templates select="MESSAGE"/></span>
				</td>
			</tr>
		</table>
	</xsl:if>
</xsl:template>

<xsl:template match="STATUS-MESSAGE[@TYPE='critical']">
	<xsl:call-template name="MODULE-CSS"/>
	<xsl:if test="MESSAGE">
		<table width="100%" class="statuses-error" style="margin-bottom: 10px; margin-top: 10px;">
			<tr>
				<td width="20">
					<img>
						<xsl:attribute name="src"><xsl:value-of select="$img_url"/>statuses-error.gif</xsl:attribute>
					</img>
				</td>
				<td>
					<span class="main-font"><xsl:apply-templates select="MESSAGE"/></span>
				</td>
			</tr>
		</table>
	</xsl:if>
</xsl:template>

<xsl:template match="STATUS-MESSAGE/MESSAGE">
	<xsl:value-of select="."/><br/>
</xsl:template>

</xsl:stylesheet>

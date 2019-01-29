<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">

	<xsl:strip-space elements="*"/>
	<xsl:output method="html" encoding="utf-8"/>

<!-- result xml example

<SUBMENU-PLACEHOLDER CURRENT-ID="item2">
	<MENU-ITEM ID="item1" TITLE="category 1" HREF="index.php?category=1"/>
	<MENU-ITEM ID="item2" TITLE="category 2" HREF="index.php?category=2"/>
	<MENU-ITEM ID="item3" TITLE="category 3" HREF="index.php?category=3"/>
</SUBMENU-PLACEHOLDER>

-->
	<xsl:template match="SUBMENU-PLACEHOLDER">
		<xsl:apply-templates select="MENU-ITEM"/>
	</xsl:template>

	<xsl:template match="SUBMENU-PLACEHOLDER/MENU-ITEM">
		<xsl:variable name="position"><xsl:value-of select="position()"/></xsl:variable>
		<xsl:choose>
			<xsl:when test="@ID=/SUBMENU-PLACEHOLDER/@CURRENT-ID">
				<!-- item is active -->
				<xsl:choose>
					<xsl:when test="$position=1">
						<!-- active item is first -->
						<xsl:choose>
							<xsl:when test="$position=last()">
								<!-- active item is single -->
								<xsl:call-template name="ACTIVE-MENU-ITEM-SINGLE"/>
							</xsl:when>
							<xsl:otherwise>
								<!-- active item is first and not single -->
								<xsl:call-template name="ACTIVE-MENU-ITEM-FIRST"/>
							</xsl:otherwise>
						</xsl:choose>
					</xsl:when>
					<xsl:otherwise>
						<!-- active item is not first -->
						<xsl:choose>
							<xsl:when test="$position=last()">
								<!-- active item is last -->
								<xsl:call-template name="ACTIVE-MENU-ITEM-LAST"/>
							</xsl:when>
							<xsl:otherwise>
								<!-- active item is not first and is not last -->
								<xsl:call-template name="ACTIVE-MENU-ITEM"/>
							</xsl:otherwise>
						</xsl:choose>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:when>
			<xsl:otherwise>
				<!-- item is not active -->
				<xsl:choose>
					<xsl:when test="$position=1">
						<!-- item is first -->
						<xsl:choose>
							<xsl:when test="$position=last()">
								<!-- item is single -->
								<xsl:call-template name="MENU-ITEM-SINGLE"/>
							</xsl:when>
							<xsl:otherwise>
								<!-- item is first and not single -->
								<xsl:call-template name="MENU-ITEM-FIRST"/>
							</xsl:otherwise>
						</xsl:choose>
					</xsl:when>
					<xsl:otherwise>
						<!-- item is not first -->
						<xsl:choose>
							<xsl:when test="$position=last()">
								<!-- item is last -->
								<xsl:call-template name="MENU-ITEM-LAST"/>
							</xsl:when>
							<xsl:otherwise>
								<!-- item is not first and is not last -->
								<xsl:call-template name="MENU-ITEM"/>
							</xsl:otherwise>
						</xsl:choose>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>

	<xsl:template name="ACTIVE-MENU-ITEM-SINGLE"><tr><td width="5"/><td class="tmenu"><xsl:value-of select="@TITLE"/></td><td class="t1"><img src="images/006_4.gif"/></td></tr></xsl:template>

	<xsl:template name="ACTIVE-MENU-ITEM-FIRST"><tr><td width="5"/><td class="tmenu"><xsl:value-of select="@TITLE"/></td><td class="t1"><img src="images/006_4.gif"/></td></tr><tr><td colspan="3"><img src="images/006_3.gif"/></td></tr></xsl:template>

	<xsl:template name="ACTIVE-MENU-ITEM-LAST"><tr><td width="5"/><td class="tmenu"><xsl:value-of select="@TITLE"/></td><td class="t1"><img src="images/006_4.gif"/></td></tr></xsl:template>

	<xsl:template name="ACTIVE-MENU-ITEM"><tr><td width="5"/><td class="tmenu"><xsl:value-of select="@TITLE"/></td><td class="t1"><img src="images/006_4.gif"/></td></tr><tr><td colspan="3"><img src="images/006_3.gif"/></td></tr></xsl:template>

	<xsl:template name="MENU-ITEM-SINGLE"><tr><td width="5"/><td><a href="{@HREF}" class="tmenua"><xsl:value-of select="@TITLE"/></a></td><td class="t1"><img src="images/006_4.gif"/></td></tr></xsl:template>

	<xsl:template name="MENU-ITEM-FIRST"><tr><td width="5"/><td><a href="{@HREF}" class="tmenua"><xsl:value-of select="@TITLE"/></a></td><td class="t1"><img src="images/006_4.gif"/></td></tr><tr><td colspan="3"><img src="images/006_3.gif"/></td></tr></xsl:template>

	<xsl:template name="MENU-ITEM-LAST"><tr><td width="5"/><td><a href="{@HREF}" class="tmenua"><xsl:value-of select="@TITLE"/></a></td><td class="t1"><img src="images/006_4.gif"/></td></tr></xsl:template>

	<xsl:template name="MENU-ITEM"><tr><td width="5"/><td><a href="{@HREF}" class="tmenua"><xsl:value-of select="@TITLE"/></a></td><td class="t1"><img src="images/006_4.gif"/></td></tr><tr><td colspan="3"><img src="images/006_3.gif"/></td></tr></xsl:template>

</xsl:stylesheet>

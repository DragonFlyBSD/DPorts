# New ports collection makefile for:	Gnome iconset
# Date created:				29 Feb 2004
# Whom:					Tom McLaughlin <tmclaugh@sdf.lonestar.org>
#
# $FreeBSD: ports/x11-themes/gnome-icons/bsd.gnome-icons.mk,v 1.9 2012/11/17 06:03:31 svnexp Exp $
#

# Port logic gratuitously stolen from x11-themes/kde-icons-noia by
# lioux@.

PKGNAMEPREFIX=	gnome-icons-

NO_BUILD=	yes

REASON=		Themes may contain artwork not done by the author. \
		Keep FreeBSD safe if theme author violated copyrights.

WANT_GNOME=	yes
INSTALLS_ICONS=	yes

do-install: icon-do-install

icon-do-install:
	cd ${WRKDIR} && ${FIND} * -type d ! -empty \
		-exec ${MKDIR} -m 0755 \
		${PREFIX}/share/icons/"{}" \;
	cd ${WRKDIR} && ${FIND} * ! -type d ! -name 'plist' ! -name '*.bak' \
		! -name '${LICENSE}' \
		-exec ${INSTALL_DATA} ${WRKDIR}/"{}" \
		${PREFIX}/share/icons/"{}" \;

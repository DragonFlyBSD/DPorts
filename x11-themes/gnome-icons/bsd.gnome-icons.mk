# Whom:					Tom McLaughlin <tmclaugh@sdf.lonestar.org>
# $FreeBSD: x11-themes/gnome-icons/bsd.gnome-icons.mk 341362 2014-01-27 09:49:41Z miwi $

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
		${STAGEDIR}${PREFIX}/share/icons/"{}" \;
	cd ${WRKDIR} && ${FIND} * ! -type d ! -name 'plist' ! -name '*.bak' \
		! -name '${LICENSE}' \
		-exec ${INSTALL_DATA} ${WRKDIR}/"{}" \
		${STAGEDIR}${PREFIX}/share/icons/"{}" \;

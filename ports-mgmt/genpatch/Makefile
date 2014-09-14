# genpatch is similar to pkgsrc's pkgdiff
# 
# The main difference is that it will automatically generate a patch file
# with an appropriate name if it detects itself to be in the WRKDIR.
# Thus patches must be generated from ${WRKSRC} so the port can properly
# apply them.  Note that really only one argument is needed:
# 
# genpatch path/to/modified file.
#
# However, there must be a modified.orig or modified.intermediate file
# in the same location for that to work.  -- John Marino
#

PORTNAME=	genpatch
PORTVERSION=	1.30
CATEGORIES=	ports-mgmt
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	draco@marino.st
COMMENT=	Patch generator tool for dports

NO_BUILD=	yes
SUB_FILES=	genpatch.sh dupe.sh portfix.sh
SUB_LIST=	PREFIX=${PREFIX}
PLIST_FILES=	bin/genpatch bin/dupe bin/portfix

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/genpatch.sh \
		${STAGEDIR}${PREFIX}/bin/genpatch
	${INSTALL_SCRIPT} ${WRKDIR}/dupe.sh \
		${STAGEDIR}${PREFIX}/bin/dupe
	${INSTALL_SCRIPT} ${WRKDIR}/portfix.sh \
		${STAGEDIR}${PREFIX}/bin/portfix

.include <bsd.port.mk>

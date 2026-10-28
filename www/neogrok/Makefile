PORTNAME=	neogrok
DISTVERSION=	1.2.5
CATEGORIES=	www devel
MASTER_SITES=	https://registry.npmjs.org/
DISTFILES=	${PORTNAME}/-/${DISTNAME}.tgz \
		${NPM_MODULES:C/^[^|]*\|//}
DIST_SUBDIR=	${PORTNAME}
EXTRACT_ONLY=	${PORTNAME}/-/${DISTNAME}.tgz

MAINTAINER=	ahuete.devel@gmail.com
COMMENT=	Web frontend for the zoekt code search engine
WWW=		https://github.com/isker/neogrok

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		nodejs:run
USE_RC_SUBR=	neogrok

NO_ARCH=	yes
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/package

PLIST_FILES=	bin/neogrok

# Runtime dependencies from npm, each fetched as its own distfile:
# NPM_MODULES is a list of <path below WRKSRC>|<tarball below the registry>.
.include "${.CURDIR}/Makefile.modules"

post-extract:
.for m in ${NPM_MODULES}
	@${MKDIR} ${WRKSRC}/${m:C/\|.*//}
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/${m:C/^[^|]*\|//} \
		-C ${WRKSRC}/${m:C/\|.*//} --strip-components 1
.endfor

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}
	${CHMOD} 555 ${STAGEDIR}${WWWDIR}/main.js
	${RLN} ${STAGEDIR}${WWWDIR}/main.js ${STAGEDIR}${PREFIX}/bin/neogrok

post-install:
	@cd ${STAGEDIR}${PREFIX} && \
		${FIND} ${WWWDIR_REL} \( -type f -o -type l \) | ${SORT} >> ${TMPPLIST}

.include <bsd.port.mk>

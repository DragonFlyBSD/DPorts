PORTNAME=	pkg
DISTVERSION=	2.8.4
_PKG_VERSION=	${DISTVERSION}
CATEGORIES=	ports-mgmt

MAINTAINER=	pkg@FreeBSD.org
COMMENT=	Package manager
WWW=		https://github.com/freebsd/pkg

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	freebsd

USE_LDCONFIG=	${PREFIX}/lib/compat/pkg
HAS_CONFIGURE=	yes
PORTDOCS=	NEWS
PORTSCOUT=	ignore:1
CONFIGURE_ARGS=	--prefix="${PREFIX}" \
		--mandir="${PREFIX}/share/man"
CONFIGURE_ENV=	CC_FOR_BUILD="${CC}"

# Use a submake as 'deinstall install' needs to reevaluate PKG_REGISTER
# so that pkg-static is used from the wrkdir
USE_SUBMAKE=	yes

OPTIONS_DEFINE=	DOCS

.if !exists(/usr/include/sys/jail.h)
EXTRA_PATCHES=	${FILESDIR}/extra-patch-docs_pkg.8
.endif

PORTREVISION= 1
PROBLEM_FILES= ${WRKSRC}/libpkg/pkg_config.c ${WRKSRC}/src/pkg.conf.sample ${WRKSRC}/docs/pkg-create.8 ${WRKSRC}/docs/pkg-set.8 ${WRKSRC}/docs/pkg-repo.8 ${WRKSRC}/docs/pkg.conf.5 ${WRKSRC}/docs/pkg-version.8 ${WRKSRC}/docs/pkg.8
CFLAGS= -I/usr/include/priv
LDFLAGS= -L/usr/lib/priv -R/lib/priv
.include <bsd.port.pre.mk>

.if defined(WITH_DEBUG)
MAKE_ARGS+=	DEBUG_FLAGS="${DEBUG_FLAGS}"
.endif

.if defined(WITH_PKG)
.if ${WITH_PKG} == devel
IGNORE=	WITH_PKG is defined to 'devel', this version is the stable one
.endif
.endif

#define PKG_DEPENDS to nothing to avoid infinite loop looking for pkg :)
PKG_DEPENDS=
.undef INSTALLS_DEPENDS

# Use the internal pkg instead, generally, unless this is a cross-build,
# in which case that won't work. Hope for the best then.
.if !defined(CROSS_TOOLCHAIN)
PKG_BIN=	${WRKSRC}/src/pkg-static
.endif

post-install:
	${INSTALL_DATA} ${WRKSRC}/src/pkg.conf.sample ${STAGEDIR}${PREFIX}/etc/
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/compat/pkg

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/NEWS ${STAGEDIR}${DOCSDIR}/NEWS

dfly-patch:
	@if [ -n "${PACKAGE_BUILDING}" ]; then \
		${REINPLACE_CMD} -e "s|/usr/ports|/usr/dports|g" ${PROBLEM_FILES}; \
	else \
		${REINPLACE_CMD} -e "s|/usr/ports|${PORTSDIR}|g" ${PROBLEM_FILES}; \
	fi
	@if [ -e /usr/lib/priv/libprivate_ssl.so ]; then \
		${REINPLACE_CMD} -e 's|lssl|lprivate_ssl|' -e 's|lcrypto|lprivate_crypto|' \
			${WRKSRC}/libpkg/Makefile.in \
			${WRKSRC}/src/Makefile.in \
			${WRKSRC}/tests/Makefile.in; \
	fi

post-stage:
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/periodic/411.pkg-backup \
		${WRKSRC}/scripts/periodic/490.status-pkg-changes \
		${STAGEDIR}${PREFIX}/etc/periodic/daily/
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/periodic/460.pkg-checksum \
		${WRKSRC}/scripts/periodic/410.pkg-audit \
		${STAGEDIR}${PREFIX}/etc/periodic/security/
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/periodic/400.status-pkg \
		${STAGEDIR}${PREFIX}/etc/periodic/weekly/
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/pkg/repos
	${INSTALL_DATA} ${DFLY_FILESDIR}/df-latest.conf.sample \
		${STAGEDIR}${PREFIX}/etc/pkg/repos

.include <bsd.port.post.mk>

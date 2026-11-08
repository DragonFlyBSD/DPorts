PORTNAME=	pkg
DISTVERSION=	2.8.99.1
_PKG_VERSION=	${DISTVERSION}
CATEGORIES=	ports-mgmt
PKGNAMESUFFIX=	-devel

MAINTAINER=	pkg@FreeBSD.org
COMMENT=	Package manager
WWW=		https://github.com/freebsd/pkg

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	freebsd
GH_TAGNAME=	efa833c0d

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

OPTIONS_DEFINE=	DOCS SAN
SAN_DESC=	Enable sanitizers (ASAN and UBSAN)

.if !exists(/usr/include/jail.h)
EXTRA_PATCHES=	${DFLY_PATCHDIR}/extra-patch-docs_pkg.8
.endif

PROBLEM_FILES= ${WRKSRC}/libpkg/pkg_config.c ${WRKSRC}/src/pkg.conf.sample ${WRKSRC}/docs/pkg-create.8 ${WRKSRC}/docs/pkg-set.8 ${WRKSRC}/docs/pkg-repo.8 ${WRKSRC}/docs/pkg.conf.5 ${WRKSRC}/docs/pkg-version.8 ${WRKSRC}/docs/pkg.8
CFLAGS= -I/usr/include/priv
LDFLAGS= -L/usr/lib/priv -R/lib/priv
.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MSAN}
CONFIGURE_ARGS+=	--with-asan --with-ubsan
.endif

# TODO: activate in april 2021
#.if ${OPSYS} == FreeBSD
#CONFIGURE_ARGS+=	--default-format=tzst
#.endif

.if defined(WITH_PKG)
.if ${WITH_PKG} != devel
.	if !defined(PACKAGE_BUILDING)
IGNORE=	WITH_PKG is not defined to 'devel', this version is the devel one
.	endif
.else
PKGNAMESUFFIX=
#define PKG_DEPENDS to nothing to avoid infinite loop looking for pkg :)
PKG_DEPENDS=
.endif
.endif

.undef INSTALLS_DEPENDS
.if !exists(${LOCALBASE}/sbin/pkg) && !defined(CROSS_TOOLCHAIN)
PKG_BIN=	${WRKSRC}/src/pkg-static
.endif

.if ${PORT_OPTIONS:MSAN}
post-build:
	@(cd ${WRKSRC}/src && \
		${LN} -fs pkg pkg-static)
.endif

post-install:
	${INSTALL_DATA} ${WRKSRC}/src/pkg.conf.sample ${STAGEDIR}${PREFIX}/etc/
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/compat/pkg
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/NEWS ${STAGEDIR}${DOCSDIR}/NEWS
.if ${PORT_OPTIONS:MSAN}
	@${CP} ${STAGEDIR}${PREFIX}/sbin/pkg ${STAGEDIR}${PREFIX}/sbin/pkg-static
.endif

dfly-patch:
.if defined(PACKAGE_BUILDING)
	@${REINPLACE_CMD} -e "s|/usr/ports|/usr/dports|g" ${PROBLEM_FILES}
.else
	@${REINPLACE_CMD} -e "s|/usr/ports|${PORTSDIR}|g" ${PROBLEM_FILES}
.endif
.if exists(/usr/lib/priv/libprivate_ssl.so)
	${REINPLACE_CMD} \
		-e 's|lssl|lprivate_ssl|' \
		-e 's|lcrypto|lprivate_crypto|' \
		${WRKSRC}/libpkg/Makefile.in \
		${WRKSRC}/src/Makefile.in \
		${WRKSRC}/tests/Makefile.in
.endif

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

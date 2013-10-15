# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: www/mod_fcgid/Makefile 330031 2013-10-10 20:02:42Z ohauer $

PORTNAME=	mod_fcgid
PORTVERSION=	2.3.9
CATEGORIES=	www
MASTER_SITES=		${MASTER_SITE_APACHE_HTTPD}
MASTER_SITE_SUBDIR=	${PORTNAME}
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}
DIST_SUBDIR=	apache2

MAINTAINER=	freebsd.ports@webstyle.ch
COMMENT=	Alternative FastCGI module for Apache2

USE_APACHE=	22+

HAS_CONFIGURE=		yes
CONFIGURE_SCRIPT=	configure.apxs

INSTALL_WRKSRC=	${WRKSRC}/modules/fcgid

SUB_FILES=	pkg-message
SUB_LIST+=	APACHEMODDIR=${APACHEMODDIR}
PLIST_SUB+=	APACHEMODDIR=${APACHEMODDIR}

MAKE_ARGS+=	top_dir="${LOCALBASE}/share/apache${APACHE_VERSION}"
MAKE_ARGS+=	INCLUDES="-I${LOCALBASE}/include/apache${APACHE_VERSION} -I${LOCALBASE}/include/apr-1"
INSTALL_TARGET=	install-modules-yes
DOCSDIR=	${PREFIX}/share/doc/apache${APACHE_VERSION}/mod

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/docs/manual/mod/mod_fcgid.html ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/docs/manual/mod/mod_fcgid.html.en ${STAGEDIR}${DOCSDIR}
	${MKDIR} -m 700 ${STAGEDIR}/var/run/fcgidsock

.include <bsd.port.mk>

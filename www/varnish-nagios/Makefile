# Created by: anders
# $FreeBSD: www/varnish-nagios/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	varnish-nagios
DISTVERSION=	1.1
CATEGORIES=	www
MASTER_SITES=	http://repo.varnish-cache.org/source/ \
		http://anders.fupp.net/distfiles/

MAINTAINER=	anders@FreeBSD.org
COMMENT=	Nagios plugin to check status of Varnish

BUILD_DEPENDS=	${LOCALBASE}/include/varnish/varnishapi.h:${PORTSDIR}/www/varnish

LICENSE=	BSD

GNU_CONFIGURE=	yes

USES=		pkgconfig

PLIST_DIRSTRY=	libexec/nagios
PLIST_FILES=	libexec/nagios/check_varnish

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/check_varnish ${PREFIX}/libexec/nagios

.include <bsd.port.mk>

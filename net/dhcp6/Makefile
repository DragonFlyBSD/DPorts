# Created by: Munechika SUMIKAWA <sumikawa@FreeBSD.org>
# $FreeBSD: net/dhcp6/Makefile 330598 2013-10-17 03:31:56Z hrs $

PORTNAME=	dhcp6
PORTVERSION=	20080615
PORTREVISION=	2
CATEGORIES=	net ipv6
MASTER_SITES=	SF/wide-dhcpv6/wide-dhcpv6/wide-dhcpv6-${PORTVERSION}
DISTNAME=	wide-dhcpv6-${PORTVERSION}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	KAME DHCP6 client, server, and relay

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--sysconfdir=${LOCALBASE}/etc \
		--with-localdbdir=/var/db
USE_RC_SUBR=	dhcp6c dhcp6relay dhcp6s
PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-install:
	cd ${WRKSRC} && ${INSTALL_DATA} \
	    dhcp6c.conf.sample dhcp6s.conf.sample \
	    ${STAGEDIR}${PREFIX}/etc
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.mk>

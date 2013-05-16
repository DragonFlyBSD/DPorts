# New ports collection makefile for:	p5-Net-Libdnet
# Date created:		21 August 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-Net-Libdnet/Makefile,v 1.15 2012/11/17 06:00:11 svnexp Exp $
#

PORTNAME=	Net-Libdnet
PORTVERSION=	0.96
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Libdnet interface

BUILD_DEPENDS=	p5-Class-Gomor>=0:${PORTSDIR}/devel/p5-Class-Gomor
RUN_DEPENDS:=	${BUILD_DEPENDS}
LIB_DEPENDS=	dnet.1:${PORTSDIR}/net/libdnet

PERL_CONFIGURE=	yes
CONFIGURE_ARGS=	INC='-I${LOCALBASE}/include'
MAN3=	Net::Libdnet.3 Net::Libdnet::Entry::Intf.3 Net::Libdnet::Intf.3 \
	Net::Libdnet::Ip.3 Net::Libdnet::Eth.3 Net::Libdnet::Tun.3 \
	Net::Libdnet::Route.3 Net::Libdnet::Fw.3 Net::Libdnet::Arp.3

post-patch:
	@${REINPLACE_CMD} -e 's|dumbnet|dnet|g' ${WRKSRC}/Libdnet.xs

.include <bsd.port.mk>

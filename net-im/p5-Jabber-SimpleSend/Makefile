# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net-im/p5-Jabber-SimpleSend/Makefile 332816 2013-11-05 07:49:09Z vanilla $

PORTNAME=	Jabber-SimpleSend
PORTVERSION=	0.03
CATEGORIES=	net-im perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Send a Jabber message simply

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Net-Jabber>=0:${PORTSDIR}/net-im/p5-Net-Jabber
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

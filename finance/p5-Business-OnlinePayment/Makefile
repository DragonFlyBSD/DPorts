# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: finance/p5-Business-OnlinePayment/Makefile 332621 2013-11-03 16:02:32Z az $

PORTNAME=	Business-OnlinePayment
PORTVERSION=	3.02
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:IVAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generic interface for processing online credit card payments

BUILD_DEPENDS=	p5-Net-SSLeay>=0:${PORTSDIR}/security/p5-Net-SSLeay \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-Tie-IxHash>=0:${PORTSDIR}/devel/p5-Tie-IxHash \
		p5-Crypt-SSLeay>=0:${PORTSDIR}/security/p5-Crypt-SSLeay \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

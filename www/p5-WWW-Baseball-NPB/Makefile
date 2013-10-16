# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: www/p5-WWW-Baseball-NPB/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	WWW-Baseball-NPB
PORTVERSION=	0.03
CATEGORIES=	www japanese perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fetches Japanese baseball games information

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		WWW::Baseball::NPB.3 WWW::Baseball::NPB::Game.3

NO_STAGE=	yes
.include <bsd.port.mk>

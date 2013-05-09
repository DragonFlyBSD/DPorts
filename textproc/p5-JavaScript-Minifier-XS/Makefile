# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-JavaScript-Minifier-XS/Makefile 316562 2013-04-26 03:10:27Z sunpoet $

PORTNAME=	JavaScript-Minifier-XS
PORTVERSION=	0.09
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	XS based JavaScript minifier

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-JavaScript-Minifier>=0:${PORTSDIR}/textproc/p5-JavaScript-Minifier \
		p5-Test-Pod>=1:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1:${PORTSDIR}/devel/p5-Test-Pod-Coverage

PERL_CONFIGURE=	yes

MAN3=		JavaScript::Minifier::XS.3

.include <bsd.port.mk>

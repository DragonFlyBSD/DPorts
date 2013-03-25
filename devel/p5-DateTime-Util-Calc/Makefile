# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: devel/p5-DateTime-Util-Calc/Makefile 314287 2013-03-15 09:56:16Z bapt $

PORTNAME=	DateTime-Util-Calc
PORTVERSION=	0.13002
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	DateTime Calculation Utilities

BUILD_DEPENDS=	p5-Math-BigInt>=0:${PORTSDIR}/math/p5-Math-BigInt \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DateTime::Util::Calc.3

OPTIONS=	GMP	"Use GMP library"	off

.include <bsd.port.pre.mk>

.if defined(WITH_GMP)
BUILD_DEPENDS+=	p5-Math-BigInt-GMP>=0:${PORTSDIR}/math/p5-Math-BigInt-GMP
.endif

.include <bsd.port.post.mk>

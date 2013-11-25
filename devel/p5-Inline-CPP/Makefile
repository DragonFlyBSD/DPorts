# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Inline-CPP/Makefile 334677 2013-11-23 15:18:15Z sunpoet $

PORTNAME=	Inline-CPP
PORTVERSION=	0.46
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Write Perl subroutines and classes in C++

LICENSE=	ART10

BUILD_DEPENDS=	p5-Inline>=0.53:${PORTSDIR}/devel/p5-Inline \
		p5-Parse-RecDescent>=0:${PORTSDIR}/devel/p5-Parse-RecDescent
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e 's|g++|${CXX}|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>

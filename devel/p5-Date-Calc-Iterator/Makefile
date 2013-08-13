# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Date-Calc-Iterator/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Date-Calc-Iterator
PORTVERSION=	1.00
CATEGORIES=	devel net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Iterate over a range of dates

BUILD_DEPENDS=	p5-Date-Calc>=0:${PORTSDIR}/devel/p5-Date-Calc
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Date::Calc::Iterator.3

.include <bsd.port.mk>

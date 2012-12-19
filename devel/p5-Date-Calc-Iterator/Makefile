# New ports collection makefile for:	Date-Calc-Iterator
# Date created:	   03 Jul 2008
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Date-Calc-Iterator/Makefile,v 1.6 2012/11/17 05:56:11 svnexp Exp $
#

PORTNAME=	Date-Calc-Iterator
PORTVERSION=	1.00
CATEGORIES=	devel net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Iterate over a range of dates

BUILD_DEPENDS=	p5-Date-Calc>=0:${PORTSDIR}/devel/p5-Date-Calc
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Date::Calc::Iterator.3

.include <bsd.port.mk>

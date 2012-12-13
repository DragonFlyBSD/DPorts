# New ports collection makefile for:	devel/p5-Data-OptList
# Date created:				6/6/6
# Whom:					Lars Balker Rasmussen <lbr@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Data-OptList/Makefile,v 1.15 2012/11/17 05:56:10 svnexp Exp $
#

PORTNAME=	Data-OptList
PORTVERSION=	0.107
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and validate simple name/value option pairs

RUN_DEPENDS=	p5-Params-Util>=0.14:${PORTSDIR}/devel/p5-Params-Util \
		p5-Sub-Install>=0.92:${PORTSDIR}/devel/p5-Sub-Install
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Data::OptList.3

.include <bsd.port.mk>

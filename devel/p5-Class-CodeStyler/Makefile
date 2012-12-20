# New ports collection makefile for:	p5-Class-CodeStyler
# Date created:				12 Jun 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Class-CodeStyler/Makefile,v 1.10 2012/11/17 05:56:07 svnexp Exp $
#

PORTNAME=	Class-CodeStyler
PORTVERSION=	0.27
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension for code generation program formatting and execution

BUILD_DEPENDS=	p5-Class-STL-Containers>=0:${PORTSDIR}/devel/p5-Class-STL-Containers
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

.include <bsd.port.mk>

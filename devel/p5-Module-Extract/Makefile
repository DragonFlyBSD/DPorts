# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: ports/devel/p5-Module-Extract/Makefile,v 1.6 2012/11/17 05:56:21 svnexp Exp $

PORTNAME=	Module-Extract
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Base class for working with Perl distributions

BUILD_DEPENDS=	p5-Archive-Extract>=0:${PORTSDIR}/archivers/p5-Archive-Extract
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		Module::Extract.3

.include <bsd.port.mk>

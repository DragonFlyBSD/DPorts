# New ports collection makefile for:	Module::Install::AuthorTests
# Date created:		22 Jan 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Module-Install-AuthorTests/Makefile,v 1.3 2012/11/17 05:56:22 svnexp Exp $
#

PORTNAME=	Module-Install-AuthorTests
PORTVERSION=	0.002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to designate tests only run by module authors

RUN_DEPENDS=	\
	p5-Module-Install>0:${PORTSDIR}/devel/p5-Module-Install
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Module::Install::AuthorTests.3

.include <bsd.port.mk>

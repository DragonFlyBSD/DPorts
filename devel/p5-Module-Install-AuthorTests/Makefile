# $FreeBSD: devel/p5-Module-Install-AuthorTests/Makefile 326802 2013-09-09 11:01:46Z az $

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

USES=		perl5
USE_PERL5=	configure

MAN3=		Module::Install::AuthorTests.3

.include <bsd.port.mk>

# $FreeBSD: devel/p5-Module-Collect/Makefile 338916 2014-01-06 18:07:56Z az $

PORTNAME=	Module-Collect
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to collect module files from some directories

RUN_DEPENDS=	\
	p5-File-Find-Rule>0:${PORTSDIR}/devel/p5-File-Find-Rule
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

# $FreeBSD: devel/p5-Project-Libs/Makefile 332805 2013-11-05 04:15:52Z kuriyama $

PORTNAME=	Project-Libs
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to add module directories of a project into @INC

RUN_DEPENDS=	\
	p5-FindBin-libs>0:${PORTSDIR}/devel/p5-FindBin-libs
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

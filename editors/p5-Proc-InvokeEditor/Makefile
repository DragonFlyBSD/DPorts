# $FreeBSD: editors/p5-Proc-InvokeEditor/Makefile 332599 2013-11-03 09:39:04Z vanilla $

PORTNAME=	Proc-InvokeEditor
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	editors perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MSTEVENS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for starting a text editor

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Carp-Assert>=0:${PORTSDIR}/devel/p5-Carp-Assert
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

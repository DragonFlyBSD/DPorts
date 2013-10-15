# $FreeBSD: editors/p5-Proc-InvokeEditor/Makefile 327720 2013-09-20 16:36:23Z bapt $

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
RUN_DEPENDS=	p5-Carp-Assert>=0:${PORTSDIR}/devel/p5-Carp-Assert

USES=		perl5
USE_PERL5=	configure

MAN3=	Proc::InvokeEditor.3

NO_STAGE=	yes
.include <bsd.port.mk>

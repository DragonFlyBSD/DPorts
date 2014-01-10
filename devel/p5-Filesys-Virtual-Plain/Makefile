# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: devel/p5-Filesys-Virtual-Plain/Makefile 338866 2014-01-06 12:05:42Z az $

PORTNAME=	Filesys-Virtual-Plain
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Plain virtual filesystem

BUILD_DEPENDS=	p5-Filesys-Virtual>=0.05:${PORTSDIR}/devel/p5-Filesys-Virtual
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

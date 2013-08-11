# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Directory-Scratch/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	Directory-Scratch
PORTVERSION=	0.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Easy-to-use self-cleaning scratch space

BUILD_DEPENDS=	p5-Path-Class>0:${PORTSDIR}/devel/p5-Path-Class \
		p5-File-Slurp>=9999.12:${PORTSDIR}/devel/p5-File-Slurp \
		p5-String-Random>0:${PORTSDIR}/devel/p5-String-Random
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Directory::Scratch.3

.include <bsd.port.mk>

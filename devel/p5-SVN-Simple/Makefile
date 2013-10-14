# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: devel/p5-SVN-Simple/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	SVN-Simple
PORTVERSION=	0.28
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Simple interface to SVN::Delta::Editor

BUILD_DEPENDS=	p5-subversion>=0:${PORTSDIR}/devel/p5-subversion
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		SVN::Simple::Edit.3 SVN::Simple::Editor.3

NO_STAGE=	yes
regression-test:
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc"
BROKEN=		Does not configure on powerpc
.endif

.include <bsd.port.post.mk>

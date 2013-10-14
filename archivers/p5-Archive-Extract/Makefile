# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: archivers/p5-Archive-Extract/Makefile 328598 2013-09-28 17:12:17Z sunpoet $

PORTNAME=	Archive-Extract
PORTVERSION=	0.68
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generic archive extracting mechanism

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
BUILD_DEPENDS+=	p5-IPC-Cmd>=0.64:${PORTSDIR}/devel/p5-IPC-Cmd
RUN_DEPENDS+=	p5-IPC-Cmd>=0.64:${PORTSDIR}/devel/p5-IPC-Cmd
.endif

.include <bsd.port.post.mk>

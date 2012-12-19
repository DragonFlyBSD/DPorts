# New ports collection makefile for:	B-Hooks-OP-Check
# Date created:	   11 Nov 2008
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-B-Hooks-OP-Check/Makefile,v 1.10 2012/11/17 05:56:05 svnexp Exp $
#

PORTNAME=	B-Hooks-OP-Check
PORTVERSION=	0.19
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Wrap OP check callbacks

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.302:${PORTSDIR}/devel/p5-ExtUtils-Depends

PERL_CONFIGURE=	yes

MAN3=		B::Hooks::OP::Check.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
BUILD_DEPENDS+=	p5-parent>=0:${PORTSDIR}/devel/p5-parent
RUN_DEPENDS+=	p5-parent>=0:${PORTSDIR}/devel/p5-parent
.endif

.include <bsd.port.post.mk>

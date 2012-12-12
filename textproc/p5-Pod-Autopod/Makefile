# New ports collection makefile for:	p5-Pod-Autopod
# Date created:				31 Oct, 2009
# Whom:		   			Wen Heping<wen@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Pod-Autopod/Makefile,v 1.5 2012/11/17 06:02:07 svnexp Exp $
#

PORTNAME=	Pod-Autopod
PORTVERSION=	1.10
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generates pod documentation by analysing perl modules

BUILD_DEPENDS=	p5-Pod-Abstract>=0.19:${PORTSDIR}/textproc/p5-Pod-Abstract
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

PERL_CONFIGURE=	yes

MAN1=		autopod.1
MAN3=		Pod::Autopod.3

.include <bsd.port.mk>

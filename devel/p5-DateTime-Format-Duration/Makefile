# New ports collection makefile for:	p5-DateTime-Format-Duration
# Date created:	   8 Jan 2004
# Whom:		   Mathieu Arnold <mat@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-DateTime-Format-Duration/Makefile,v 1.9 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Format-Duration
PORTVERSION=	1.03a
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Format and parse DateTime::Durations

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${DISTNAME:C/a$//}

PERL_CONFIGURE=	yes

MAN3=		DateTime::Format::Duration.3

.include <bsd.port.mk>

# New ports collection makefile for:	p5-DateTime-Format-Baby
# Date created:	   2 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Format-Baby/Makefile,v 1.8 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Format-Baby
PORTVERSION=	1.0100
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format baby-style time

RUN_DEPENDS=	p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
BUILD_DEPENDS:=	${RUN_DEPENDS}

WRKSRC=		${WRKDIR}/${DISTNAME:S/00//}

PERL_CONFIGURE=	yes

MAN3=		DateTime::Format::Baby.3

.include <bsd.port.mk>

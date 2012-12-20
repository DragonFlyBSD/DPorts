# New ports collection makefile for:	p5-DateTime-HiRes
# Date created:	   3 october 2003
# Whom:		   mat
#
# $FreeBSD: ports/devel/p5-DateTime-HiRes/Makefile,v 1.7 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-HiRes
PORTVERSION=	0.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create DateTime objects with sub-second current time resolution

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-Time-HiRes>=0:${PORTSDIR}/devel/p5-Time-HiRes

PERL_MODBUILD=	yes

MAN3=		DateTime::HiRes.3

.include <bsd.port.mk>

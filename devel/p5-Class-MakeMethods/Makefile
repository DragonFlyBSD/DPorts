# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/devel/p5-Class-MakeMethods/Makefile 331856 2013-10-28 13:46:25Z vanilla $

PORTNAME=	Class-MakeMethods
PORTVERSION=	1.010
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/.$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate common types of methods

USES=		perl5
USE_PERL5=	configure

post-extract:
		@${RM} ${WRKSRC}/benchmark.pl
		@${REINPLACE_CMD} -i '' '/benchmark.pl/d' ${WRKSRC}/MANIFEST

.include <bsd.port.mk>

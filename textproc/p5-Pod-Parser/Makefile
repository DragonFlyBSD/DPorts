# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: textproc/p5-Pod-Parser/Makefile 334223 2013-11-18 16:45:09Z mat $

PORTNAME=	Pod-Parser
PORTVERSION=	1.61
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Modules to work with POD (Plain Old Documentation)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5 dos2unix
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/EXE_FILES/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>

# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Pod-Parser/Makefile 342648 2014-02-05 08:10:46Z culot $

PORTNAME=	Pod-Parser
PORTVERSION=	1.62
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

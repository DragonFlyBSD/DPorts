# Created by: Dmitry Sivachenko <dima@Chg.RU>
# $FreeBSD: converters/p5-Convert-Recode/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	Convert-Recode
PORTVERSION=	1.04
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Front end to the GNU recode program

BUILD_DEPENDS=	recode:${PORTSDIR}/converters/recode
RUN_DEPENDS=	recode:${PORTSDIR}/converters/recode

USES=		perl5
USE_PERL5=	configure

MAN3=		Convert::Recode.3

NO_STAGE=	yes
post-patch:
		@${REINPLACE_CMD} -i '' -e 's|recode -\$$|${LOCALBASE}/bin/recode -\$$|' \
			${WRKSRC}/Recode.pm

.include <bsd.port.mk>

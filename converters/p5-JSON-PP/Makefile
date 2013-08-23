# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: converters/p5-JSON-PP/Makefile 325161 2013-08-21 17:17:25Z sunpoet $

PORTNAME=	JSON-PP
PORTVERSION=	2.27202
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MAKAMAKA
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	JSON::XS compatible pure-Perl module

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USE_PERL5=	configure
USES=		perl5

MAN1=		p5json_pp.1
MAN3=		JSON::PP.3 \
		JSON::PP::Boolean.3

SUB_FILES=	pkg-install

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
PLIST_SUB=	BIN_JSON_PP=""
.else
PLIST_SUB=	BIN_JSON_PP="@comment "
.endif

pre-patch:
	@${MV} ${WRKSRC}/bin/json_pp ${WRKSRC}/bin/p5json_pp
	@${REINPLACE_CMD} -e 's|bin/json_pp|bin/p5json_pp|' ${WRKSRC}/MANIFEST ${WRKSRC}/Makefile.PL

post-install:
	@${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include <bsd.port.post.mk>

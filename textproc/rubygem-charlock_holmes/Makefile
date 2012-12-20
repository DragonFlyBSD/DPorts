# $FreeBSD: ports/textproc/rubygem-charlock_holmes/Makefile,v 1.2 2012/11/17 06:02:20 svnexp Exp $

PORTNAME=	charlock_holmes
PORTVERSION=	0.6.8
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Gems for character encoding detection

LIB_DEPENDS=	icui18n:${PORTSDIR}/devel/icu

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
CONFIGURE_ARGS=	--with-icu-include=${LOCALBASE}/include
PLIST_FILES=	lib/ruby/gems/${RUBY_VER}/gems/charlock_holmes-${PORTVERSION}/ext/charlock_holmes/src/file-5.08/src/.libs/libmagic.la

.include <bsd.port.mk>

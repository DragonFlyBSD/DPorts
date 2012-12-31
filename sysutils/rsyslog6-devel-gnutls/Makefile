#New ports collection makefile for: rsyslog4-gnutls
# Date created:     29 December 2008
# Whom:             Cristiano Rolim Pereira <cristianorolim@hotmail.com>
#
# $FreeBSD: ports/sysutils/rsyslog6-devel-gnutls/Makefile,v 1.13 2012/11/17 06:01:44 svnexp Exp $
#

COMMENT=	GNUTLS module for rsyslog
MASTERDIR=	${.CURDIR}/../rsyslog6-devel

MNAME=	gnutls
LIB_DEPENDS+=	gnutls.47:${PORTSDIR}/security/gnutls \
		gcrypt.18:${PORTSDIR}/security/libgcrypt

USE_PKGCONFIG=	yes

CONFIGURE_ARGS+=--enable-gnutls

PLIST_FILES+=	lib/rsyslog/lmnsd_gtls.la \
		lib/rsyslog/lmnsd_gtls.so

do-install:
	@${INSTALL_PROGRAM} \
		${WRKSRC}/runtime/.libs/lmnsd_gtls.so ${PREFIX}/lib/rsyslog
	@${INSTALL_DATA} \
		${WRKSRC}/runtime/lmnsd_gtls.la ${PREFIX}/lib/rsyslog
.include "${MASTERDIR}/Makefile"

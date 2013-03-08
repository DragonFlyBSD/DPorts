# New ports collection makefile for: rsyslog4-dbi
# Date created:     29 December 2008
# Whom:             Cristiano Rolim Pereira <cristianorolim@hotmail.com>
#
# $FreeBSD: ports/sysutils/rsyslog6-dbi/Makefile,v 1.2 2012/11/17 06:01:44 svnexp Exp $

COMMENT=	LibDBI output module for rsyslog
MASTERDIR=	${.CURDIR}/../rsyslog6

MNAME=	libdbi
LIB_DEPENDS=	dbi.1:${PORTSDIR}/databases/libdbi

CONFIGURE_ARGS+=--enable-libdbi

PLIST_FILES+=	lib/rsyslog/omlibdbi.la \
		lib/rsyslog/omlibdbi.so

do-install:
	@${INSTALL_PROGRAM} \
		${WRKSRC}/plugins/omlibdbi/.libs/omlibdbi.so ${PREFIX}/lib/rsyslog
	@${INSTALL_DATA} \
		${WRKSRC}/plugins/omlibdbi/omlibdbi.la ${PREFIX}/lib/rsyslog

.include "${MASTERDIR}/Makefile"

# $FreeBSD: ftp/php53-ftp/Makefile 332429 2013-11-01 23:49:56Z flo $

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php53

PKGNAMESUFFIX=	-ftp

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"
